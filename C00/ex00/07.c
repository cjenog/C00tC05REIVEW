#include <unistd.h>
#include <stdio.h>

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT,&c,sizeof(char));
}

void rec(int nb)
{
	if (nb == 0)
		return ;
	rec(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
//		rec((-nb) / 10);
		rec(-(nb / 10));
		ft_putchar(-nb % 10 + '0');
	}
	else
	{	rec(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}



int	main(void)
{
	int i =0;
	scanf("%d",&i);
	ft_putnbr(i);
	return 0;
}

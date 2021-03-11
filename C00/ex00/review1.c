#include <unistd.h>
#include <stdio.h>

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT,&c,sizeof(char));
}


void	ft_divide(int di)
{
	ft_putchar((di / 10) + '0');
	ft_putchar((di % 10) + '0');
}

void	ft_print_alphabet(void)
{
	int ft = -1, se;

	while (++ft <= 98)
	{
		se = ft;
		while (++se <= 99)
		{
			ft_divide(ft);
			ft_putchar(' ');
			ft_divide(se);
			if (ft != 98)
				write(STDOUT,", ",2);
		}
	}
}


int	main(void)
{
	ft_print_alphabet();
	return 0;
}

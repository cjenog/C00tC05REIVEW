#include <unistd.h>
#include <stdio.h>



void	rec(int nb)

{

	char ch;



	if (nb == 0)

		return ;

	rec(nb / 10);

	ch = '0' + nb % 10;

	write(1, &ch, 1);

}



void	ft_putnbr(int nb)

{

	char ch;



	if (nb < 0)

	{

		write(1, "-", 1);

		rec(-(nb / 10));

		ch = '0' - nb % 10;

	}

	else

	{

		rec(nb / 10);

		ch = '0' + nb % 10;

	}

//	write(1, &ch, 1);

}

int main()
{
	int i = 0;
	printf("sujeong\n");
	scanf("%d",&i);
	ft_putnbr(i);
	return 0;
}

#include <unistd.h>
#include <stdio.h>

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT,&c,sizeof(char));
}

void	ft_print_alphabet(void)
{
	char arr[5];

	arr[0] = '0' - 1;
	arr[3] = ',';
	arr[4] = ' ';


	while (++arr[0] <= '7')
	{
		arr[1] = arr[0];
		while (++arr[1] <= '8')
		{
			arr[2] = arr[1];
			while (++arr[2] <= '9')
			{
				write(1,arr,5);
			}
		}
	}
}


int	main(void)
{
	ft_print_alphabet();
	return 0;
}

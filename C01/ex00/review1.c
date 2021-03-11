#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


int	main(void)
{
	int i = 0;
	int *nbr = &i;

	printf("%d\n",i);
	ft_ft(nbr);
	printf("%d\n",*nbr);
	printf("%d\n",i);
	
	return 0;
}

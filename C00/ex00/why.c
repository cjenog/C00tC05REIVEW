#include <stdio.h>

int	main(void)
{
	int i = -2147483648;
	unsigned int ui = 0;

	ui = -i;
	printf("%u \n", ui);

	ui = i / 10;
	printf("%u \n", ui);

	ui = -i / 10;
	printf("%u \n", ui);

	ui = -(i / 10);
	printf("%u \n", ui);

	ui = -214748364;
	printf("%u \n", ui);

	return 0;
}

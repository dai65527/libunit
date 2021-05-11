#include <stdio.h>

int	zero(void)
{
	return (0);
}

int		divzero_test(void)
{
	int	x;
	int	y;

	x = 1234;
	y = x / zero();
	printf("%d\n", y);
	return (0);
}

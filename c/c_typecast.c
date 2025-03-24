#include <stdio.h>

float	c_divint(int n, int m)
{
	return ((float)n / (float)m);
}

int	main(void)
{
	{
		int	n = 23, m = 5;
	
		printf("%d / %d = %f\n", n, m, c_divint(n, m));
	}
	return (0);
}

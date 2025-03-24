#include <stdio.h>

static int	_abs(int n)
{
	return n *= ((n < 0) ? -1 : 1);
}

int	main(void)
{
	{
		int	p = 23, n = -23;
		printf("abs of %d : %d\n", p, _abs(p));
		printf("abs of %d : %d\n", n, _abs(n));
	}
	{
		int	n = -12;
		int	m = (n <= 0) ? 1 : 0;
		
		printf("m : %d\n", m);
	}
	return 0;
}

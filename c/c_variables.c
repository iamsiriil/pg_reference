#include <stdio.h>

int	ga, gb, gd, gc;

int	main(void)
{
	{
		printf("\n\tUninitialized variables\n\n");

		int	a, b, c, d;
		printf("a : %d\n", a);
		printf("b : %d\n", b);
		printf("c : %d\n", c);
		printf("d : %d\n", d);
	}
	{
		printf("\n\tUninitialized global variables\n\n");

		printf("ga : %d\n", ga);
		printf("gb : %d\n", gb);
		printf("gc : %d\n", gc);
		printf("gd : %d\n", gd);
	}
	return (0);
}

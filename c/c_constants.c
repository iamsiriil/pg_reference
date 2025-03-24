#include <stdio.h>

int	main(void)
{
	{
		int	inbr = 123;
		int	xnbr = 0x12a;
		printf("%p\n", &inbr);
		printf("%p\n", &xnbr);
	}
	{
		long	lnbr = 123456ul;
		printf("%p\n", &lnbr);
		printf("%lu\n", lnbr);
	}
	{
		printf("%zu\n", sizeof(115l));
		int	nbr;
		nbr = 123LU;
		for (unsigned long i = 0; i < nbr; i++)
			printf("%lo\n", i);
	}
	return (0);
}

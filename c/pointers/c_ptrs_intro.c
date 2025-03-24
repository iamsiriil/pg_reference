#include <stdio.h>

int	main(void)
{
	{
		int	nbr = 3, *ptr = &nbr;

		printf("&ptr @ %p | ptr : %p | *ptr : %d\n", &ptr, ptr, *ptr);
		printf("&nbr @ %p | nbr : %d\n", &nbr, nbr);
		printf("\n");
	}
	{
		int	nbr = 3;
		int	*p1 = &nbr, **p2 = &p1, ***p3 = &p2, ****p4 = &p3;

		printf("nbr\t=\t%d\t       (****p4)\n", ****p4);
		printf("&nbr\t@\t%p (***p4)\n", &nbr); // ***p4
		printf("&p1\t@\t%p (**p4)\n", &p1);   // **p4
		printf("&p2\t@\t%p (*p4)\n", &p2);   // *p4
		printf("&p3\t@\t%p (p4)\n", &p3);   // p4
		printf("&p4\t@\t%p\n", &p4);   // &p4
	}
		return (0);
}

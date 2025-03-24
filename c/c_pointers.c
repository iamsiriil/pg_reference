#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	{
		int	nbr = 8, *ptr = &nbr, i = 10;
		printf("val %d\t@ %p\n", *ptr, (void *)ptr);
		ptr++;					// exploring adjacent memory blocks
		do {
			printf("val %d\t@ %p\n", *ptr, (void *)ptr);
		} while (i-- && ptr++);
	}
	{
		int	arr[10] = {[0] = 1, [1 ... 8] = 2, [9] = 3};
		int	*ptr = arr;

		do {
			printf("%d ", *ptr);
		} while (*ptr++ != 3); 
		printf("\n");
	}	
	{
		const char	*str = "This is a String!";

		do {
			printf("%c ", *str);
		} while (*str++);
		printf("\n");
	}
	return (0);
}

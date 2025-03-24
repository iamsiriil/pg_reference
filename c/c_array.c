#include <stdio.h>
#include <stdlib.h>
#include <stdalign.h>

int	main(void)
{
	{
		int	arr[] = {0, 1, 2, 3, 4, 5};
	
		printf("size of arr : %zu\n", sizeof(arr));
		printf("size of int : %zu\n", sizeof(int));
	
		for (int i = 0; i < 6; i++)
			printf("index #%d at %p | aligend each %lu bytes\n", i, &arr[i], alignof(int));
	}
	{
		char	arr[] = {0, 1, 2, 3, 4, 5};

		printf("size of arr : %zu\n", sizeof(arr));
		printf("size of char : %zu\n", sizeof(char));

		for (int i = 0; i < 6; i++)
			printf("index #%d ar %p | aligned each %lu bytes\n", i, &arr[i], alignof(char));
	}
	{
		int	mda[2][3];
		int	(*ptr)[3] = mda;
		(void)ptr;
		printf("&mda : %p\nmda : %p\n*mad[0] : %p\nmad[0] : %p | &mda[0][0] : %p\n", &mda, mda, *mda, mda[0], &mda[0][0]);
	}
	return (0);
}

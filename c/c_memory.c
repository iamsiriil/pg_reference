#include <stdio.h>
#include <stdalign.h>

int	main(void)
{
	{
		printf("\t\tData sizes\n\n");
		char		c;
		printf("size of char\t\t: %zu : %zu\n", sizeof(char), sizeof c);

		short int	si;
		printf("size of short int\t: %zu : %zu\n", sizeof(short int), sizeof si);

		int		i;
		printf("size of int\t\t: %zu : %zu\n", sizeof(int), sizeof i);

		long int	li;
		printf("size of long int\t: %zu : %zu\n", sizeof(long int), sizeof li);

		long long int	lli;
		printf("size of long long int\t: %zu : %zu\n", sizeof(long long int), sizeof lli);

		float		f;
		printf("size of float\t\t: %zu : %zu\n", sizeof(float), sizeof f);

		double		d;
		printf("size of double\t\t: %zu : %zu\n", sizeof(double), sizeof d);
	}
	{
		printf("\n\n\t\tMemory Addresses\n\n");

		char	c = 1;
		printf("char c\t\tsize :\t%zu\tvalue :\t%d\t@ %p\n", sizeof c, c, (void *)&c);

		int	i = 2;
		printf("int i\t\tsize :\t%zu\tvalue :\t%d\t@ %p\n", sizeof i, i, (void *)&i);

		double	d = 3.0;
		printf("double f\tsize :\t%zu\tvalue :\t%.1f\t@ %p", sizeof d, d, (void *)&d);
	}
	{
		printf("\n\n\n\t\tAddresses in Arrays\n\n");
		int	arr[10];
		for (int i = 0; i < 10; i++)
			printf("arr[%d] @ %p\n", i, (void * )&arr[i]);
	}
	{
		printf("\n\n\n\t\tMemory Alignmet\n\n");
		printf("chars align at %zu and have size %zu.\n",
			alignof(char), sizeof(char));
		printf("ints align at %zu and have size %zu.\n",
			alignof(int), sizeof(int));
		printf("doubles align at %zu and have size %zu.\n",
			alignof(double), sizeof(double));
	}
	return (0);
}

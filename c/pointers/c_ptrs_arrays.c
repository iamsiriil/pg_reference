#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	{
		int	arr[2][3] = {{1, 3, 5}, {7, 9, 11}};
		int	*ptr = &arr[0][0];
		int	i = 2 * 3;

		while (--i) printf("i : %d | *ptr : %d\n", i, *(ptr++));
		printf("\n");
	}
	{
		int	n[2] = {1, 3}, *ptr = &n[0];

		printf("%d\n", ++*ptr);
		printf("%d\n", *ptr);
	}
	{
		char	*str = "THIS IS A STRING!";
		do { write(1, str, 1); } while (*str++);
		write(1, "\n", 1);
	}
	{
		int	arr[2][3] = {{1, 3, 5},{7, 9, 11}};
		//int	*ptr = &arr[0][0];

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 3; j++)
				printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
	{
		fflush(stdout);
		int	arr[2][3] = {{1, 3, 5},{7, 9, 11}};
		int	*ptr = &arr[0][0];

		printf("&arr[0] : %p | ptr : %p\n", &arr[0], ptr);
		ptr += 3;
		printf("&arr[1] : %p | ptr : %p\n", &arr[1], ptr);
	}
	return (0);
}

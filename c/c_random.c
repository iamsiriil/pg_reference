#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int	main(void)
{
	{
		// Generate ten random numbers
		int	i = 0, rnum = 0;

		for (; i < 10; i++) {
			rnum = rand();
			printf("%d ", rnum);
		}
		printf("\n");
	}
	{
		// Generate ten random nbrs lower than n
		int	max = 1000;

		for (int i = 0; i < 10; i++) {
			int rnum = rand() % (max + 1);
			printf("%d ", rnum);
		}
		printf("\n");
	}
	{
		// Generate ten reandom nbrs within range
		int	max = 126, min = 32, rnum = 0;

		for (int i = 0; i < 10; i++) {
			rnum = rand() % (max - min + 1) + min;
			printf("%c ", rnum);
		}
		printf("\n");
	}
	{
		// If we want different numbers every
		// time we compile the program, we need
		// to feed a new seed each time to
		// srand()
		int	max = 127, min = 32, rnum = 0;

		srand(time(NULL));

		for (int i = 0; i < 10; i++) {
			rnum = rand() % (max - min + 1) + min;
			printf("%c ", rnum);
		}
		printf("\n");
	}
	return (0);
}

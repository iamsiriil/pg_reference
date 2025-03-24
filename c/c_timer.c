#include <sys/time.h>
#include <stdio.h>

double	get_time(void) {
	struct timeval	tv;
	gettimeofday(&tv, NULL);
	return ((double)tv.tv_sec + (double)tv.tv_usec / 1000000.0);
}

int	main(void)
{
	double	start = get_time();
	for (int i = 0; i < 10000; i++)
		;
	double	end = get_time();

	printf("time : %f\n", end - start);
	return (0);
}

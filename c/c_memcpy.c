#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

double	get_time(void) {
	struct timeval	tv;
	gettimeofday(&tv, NULL);
	return ((double)tv.tv_sec + (double)tv.tv_usec / 1000000.0);
}

size_t	c_strlen(const char *str)
{
	size_t	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	main(void)
{
	size_t		size = 1000000;
	char		str[size]; 

	unsigned char	dest1[size];
	unsigned char	dest2[size];

	for (size_t i = 0; i < size; i++)
		str[i] = 'A';
	str[size] = '\0';

	size_t		i;
	size_t		iter = 0;

	double		start = get_time();
	for (i = 0; i < (size / sizeof(size_t)); i++, iter++)
		*((size_t *)(dest1 + i * sizeof(size_t))) = *((const size_t *)(str + i * sizeof(size_t)));
	double		end = get_time();
	double		std_time = end - start;

	printf("iteration count %zu | time : %f\n", iter, std_time);

	size_t		j;
	iter = 0;
	start = get_time();
	for (j = 0; j < size; j++, iter++)
		dest2[j] = str[j];
	end = get_time();

	double		new_time = end - start;
	(void)dest2;

	printf("iteration count %zu | time : %f\n", iter, new_time);

	printf("size of size_t : %zu\n", sizeof(size_t));
	printf("size of unsigned char : %zu\n", sizeof(unsigned char));
	return (0);
}	


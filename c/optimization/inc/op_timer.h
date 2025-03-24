#ifndef C_OPT_TIMER_H
# define C_OPT_TMER_H

# include <sys/time.h>
# include <stdlib.h>

typedef struct	s_time
{
	char	*name;
	double	dur;
}	t_time;

double	get_time(void) {
	struct timeval	tv;
	gettimeofday(&tv, NULL);
	return ((double)tv.tv_sec + (double)tv.tv_usec / 1000000.0);
}

#endif

#include "./inc/op_timer.h"
#include "./inc/op_strcopy.h"

int	main(void)
{
	size_t	size = 9999;
	double	start = 0.0, end = 0.0;
      	t_time	tstr[6];
	{
		char	dest[size];
		char	src[size];
		memset(src, 'A', size);

		start = get_time();
		strcpy(dest, src);
		end = get_time();

		tstr[0].name = "strcpy\t";
		tstr[0].dur = end - start;
	}
	{
		char	dest[size];
		char	src[size];
		memset(src, 'A', size);

		start = get_time();
		op_strcpy01(dest, src);
		end = get_time();

		tstr[1].name = "op_strcpy01";
		tstr[1].dur = end - start;
	}
	{
		char	dest[size];
		char	src[size];
		memset(src, 'A', size);

		start = get_time();
		op_strcpy02(dest, src);
		end = get_time();

		tstr[2].name = "op_strcpy02";
		tstr[2].dur = end - start;
	}
	{
		char	dest[size];
		char	src[size];
		memset(src, 'A', size);

		start = get_time();
		op_strcpy03(dest, src);
		end = get_time();

		tstr[3].name = "op_strcpy03";
		tstr[3].dur = end - start;
	}
	{
		char	dest[size];
		char	src[size];
		memset(src, 'A', size);

		start = get_time();
		op_strcpy04(dest, src, size);
		end = get_time();

		tstr[4].name = "op_strcpy04";
		tstr[4].dur = end - start;
	}
	{
		char	dest[size];
		char	src[size];
		memset(src, 'A', size);

		start = get_time();
		op_strcpy05(dest, src, size);
		end = get_time();

		tstr[5].name = "op_strcpy05";
		tstr[5].dur = end - start;
	}
	for (int i = 0; i < 6; i++)
		printf("func : %s\t| dur : %lf\n", tstr[i].name, tstr[i].dur);
	return (0);
}

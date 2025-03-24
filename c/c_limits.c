#include <limits.h>
#include <float.h>
#include <stdio.h>

int	main(void)
{
	{
		printf("\tUNSIGNED CHAR - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(unsigned char));
		printf("MIN  : %d\nMAX  : %d\n", 0, UCHAR_MAX);
		printf("\n");
	}
	{
		printf("\tSIGNED CHAR - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(char));
		printf("MIN  : %d\nMAX  : %d\n", CHAR_MIN, CHAR_MAX);
		printf("\n");
	}
	{
		printf("\tUNSIGNED SHORT - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(short));
		printf("MIN  : %d\nMAX  : %d\n", 0, USHRT_MAX);
		printf("\n");
	}
	{
		printf("\tSIGNED SHORT - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(short));
		printf("MIN  : %d\nMAX  : %d\n", SHRT_MIN, SHRT_MAX);
		printf("\n");
	}
	{
		printf("\tUNSIGNED INT - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(int));
		printf("MIN  : %u\nMAX  : %u\n", 0, UINT_MAX);
		printf("\n");
	}
	{
		printf("\tSIGNED INT - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(int));
		printf("MIN  : %u\nMAX  : %u\n", INT_MIN, INT_MAX);
		printf("\n");
	}
	{
		printf("\tUNSIGNED LONG - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(long));
		printf("MIN  : %u\nMAX  : %lu\n", 0, ULONG_MAX);
		printf("\n");
	}
	{
		printf("\tSIGNED LONG - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(long));
		printf("MIN  : %lu\nMAX  : %lu\n", LONG_MIN, LONG_MAX);
		printf("\n");
	}
	{
		printf("\tFLOAT - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(float));
		printf("MIN  : %f\nMAX  : %f\n", FLT_MIN, FLT_MAX);
		printf("\n");
	}
	{
		printf("\tDOUBLE - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(double));
		printf("MIN  : %f\nMAX  : %f\n", DBL_MIN, DBL_MAX);
		printf("\n");
	}
	{
		printf("\tLONG DOUBLE - Range\n");
		printf("SIZE : %zu byte(s)\n", sizeof(long double));
		printf("MIN  : %Lf\nMAX  : %Lf\n", LDBL_MIN, LDBL_MAX);
		printf("\n");
	}

	return (0);
}

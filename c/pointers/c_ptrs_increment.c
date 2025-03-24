#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv) {

	if (argc > 2)
		return 1;

	int n = atoi(argv[1]);
	switch (n)
	{
		case 1:
			{
				/*
				 *		ptr++
				 *
				 *	1) returns address
				 *	2) incrementes POINTER
				 */
				int	arr[2] = {1, 3}, *ptr = arr;
	
				printf("\n\t\tptr++\n\n");
	
				for (int i = 0; i < 2; i++) printf("arr[%d]\t@\t%p\tval : %d\n", i, &arr[i], arr[i]);
	
				printf("ptr++\tto\t%p\tval : %d\n", ptr++, arr[0]);
				printf("\n");
				break;
			}
		case 2:
			{
				/*
				 *		++ptr
				 *
				 *	1) increments POINTER
				 *	2) returns address
				 */
				int	arr[2] = {1, 3}, *ptr = arr;
	
				printf("\n\t\t++ptr\n\n");
	
				for (int i = 0; i < 2; i++) printf("arr[%d]\t@\t%p\tval : %d\n", i, &arr[i], arr[i]);
	
				printf("++ptr\tto\t%p\tval : %d\n", ++ptr, arr[1]);
				printf("\n");
				break;
			}
		case 3:
			{
				/*
				 *		*ptr++
				 *
				 *	1) dereferences pointer
				 *	2) returns VALUE
				 *	3) increments POINTER
				 */
				int	arr[2] = {1, 3}, *ptr = arr;
	
				printf("\n\t\t*ptr++\n\n");
	
				for (int i = 0; i < 2; i++) printf("arr[%d]\t@\t%p\tval : %d\n", i, &arr[i], arr[i]);
	
				printf("val\t@\t%p\t    : %d (*ptr++)\n", &arr[0], *ptr++);
				printf("val\t@\t%p\t    : %d\n", ptr, arr[1]);
				printf("\n");
				break;
			}
		case 4:
			{
				/*
				 *		(*ptr)++
				 *
				 *	1) dereferences pointer
				 *	2) returns VALUE
				 *	3) increments VALUE
				 */
				int	arr[2] = {1, 3}, *ptr = arr;
	
				printf("\n\t\t(*ptr)++\n\n");
	
				for (int i = 0; i < 2; i++) printf("arr[%d]\t@\t%p\tval : %d\n", i, &arr[i], arr[i]);
	
				printf("val\t@\t%p\t    : %d ((*ptr)++)\n", &arr[0], (*ptr)++);
				printf("val\t@\t%p\t    : %d\n", ptr, arr[0]);
				printf("\n");
				break;
			}
		case 5:
			{
				/*
				 *		*(++ptr)
				 *
				 *	1) increments POINTER
				 *	2) dereferences pointer
				 *	3) returns VALUE
				 */
				int	arr[2] = {1, 3}, *ptr = arr;
	
				printf("\n\t\t*(++ptr)\n\n");
	
				for (int i = 0; i < 2; i++) printf("arr[%d]\t@\t%p\tval : %d\n", i, &arr[i], arr[i]);
	
				printf("val\t@\t%p\t    : %d (*(++ptr))\n", &arr[1], *(++ptr));
				printf("val\t@\t%p\t    : %d\n", ptr, arr[1]);
				printf("\n");
				break;
			}
		case 6:
			{
				/*
				 *		++(*ptr)
				 *
				 *	1) dereferences pointer
				 *	2) increments VALUE
				 *	3) returns VALUE
				 */
				int	arr[2] = {1, 3}, *ptr = arr;
	
				printf("\n\t\t++(*ptr)\n\n");
	
				for (int i = 0; i < 2; i++) printf("arr[%d]\t@\t%p\tval : %d\n", i, &arr[i], arr[i]);
	
				printf("val\t@\t%p\t    : %d (++(*ptr))\n", &arr[0], ++(*ptr));
				printf("val\t@\t%p\t    : %d\n", ptr, arr[0]);
				printf("\n");
				break;
			}
		default :
			printf("This is the default\n");
	}

	return 0;
}

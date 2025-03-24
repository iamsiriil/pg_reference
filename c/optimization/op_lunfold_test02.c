#include "./inc/op_timer.h"
#include "./inc/op_lunfold.h"

int	main(void)
{
	int	size = 999999;
	int	arr[size];

	int	i = 10;
	while (i--)
	{
		if (size % i == 0)
			break;
	}
	switch (i)
	{
		case 9:
			printf("Unfold by %d\n", i);
			op_unfold9(arr, size);
			break;
		case 8:
			printf("Unfold by %d\n", i);
			op_unfold8(arr, size);
			break;
		case 7:
			printf("Unfold by %d\n", i);
			op_unfold7(arr, size);
			break;
		case 6:
			printf("Unfold by %d\n", i);
			op_unfold6(arr, size);
			break;
		case 5:
			printf("Unfold by %d\n", i);
			op_unfold5(arr, size);
			break;
		case 4:
			printf("Unfold by %d\n", i);
			op_unfold4(arr, size);
			break;
		case 3:
			printf("Unfold by %d\n", i);
			op_unfold3(arr, size);
			break;
		case 2:
			printf("Unfold by %d\n", i);
			op_unfold2(arr, size);
			break;
		default:
			for (int i = 0; i < size; i++)
				printf("default: i : %d\n", i);
			break;
	}
	for (int i = 0; i < size; i++)
		printf("arr[%d] : %d\n", i, arr[i]);
	return (0);
}

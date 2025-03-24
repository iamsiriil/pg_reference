#include "./inc/op_timer.h"
#include "./inc/op_lunfold.h"

int	main(void)
{
	t_time	test[4] = {[0 ... 3] = {NULL, 0.0}};
	
	int	size = 999999;
	{
		double	start, end;
		int	arr[size];

		start = get_time();
		op_unfold9(arr, size);
		end =get_time();
	
		test[3].name = "unfold9";
		test[3].dur = end - start;
	}
	{
		double	start, end;
		int	arr[size];

		start = get_time();
		op_unfold7(arr, size);
		end =get_time();

		test[2].name = "unfold7";
		test[2].dur = end - start;
	}
	{
		double	start, end;
		int	arr[size];

		start = get_time();
		op_unfold3(arr, size);
		end =get_time();
	
		test[1].name = "unfold3";
		test[1].dur = end - start;
	}
	{
		double	start, end;
		int	arr[size];

		start = get_time();
		op_unfold1(arr, size);
		end = get_time();
	
		test[0].name = "unfold1";
		test[0].dur = end - start;
	}

	for (int i = 0; i < 4; i++)
		printf("%s : %f\n", test[i].name, test[i].dur);

	return (0);
}

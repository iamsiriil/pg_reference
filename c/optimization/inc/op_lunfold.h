#ifndef OP_LUNFOLD_H
# define OP_LUNFOLD_H

# include <stdio.h>

void	op_unfold9(int	arr[], int size)
{
	for (int i = 0, n = 0; i < size; i += 9, n++) {
		arr[i] = n;
		arr[i + 1] = n;
		arr[i + 2] = n;
		arr[i + 3] = n;
		arr[i + 4] = n;
		arr[i + 5] = n;
		arr[i + 6] = n;
		arr[i + 7] = n;
		arr[i + 8] = n;
	}
}

void	op_unfold8(int	arr[], int size)
{
	for (int i = 0, n = 0; i < size; i += 8, n++) {
		arr[i] = n;
		arr[i + 1] = n;
		arr[i + 2] = n;
		arr[i + 3] = n;
		arr[i + 4] = n;
		arr[i + 5] = n;
		arr[i + 6] = n;
		arr[i + 7] = n;
	}
}

void	op_unfold7(int	arr[], int size)
{
	for (int i = 0, n = 0; i < size; i += 7, n++) {
		arr[i] = n;
		arr[i + 1] = n;
		arr[i + 2] = n;
		arr[i + 3] = n;
		arr[i + 4] = n;
		arr[i + 5] = n;
		arr[i + 6] = n;
	}
}

void	op_unfold6(int	arr[], int size)
{
	for (int i = 0, n = 0; i < size; i += 6, n++) {
		arr[i] = n;
		arr[i + 1] = n;
		arr[i + 2] = n;
		arr[i + 3] = n;
		arr[i + 4] = n;
		arr[i + 5] = n;
	}
}

void	op_unfold5(int	arr[], int size)
{
	for (int i = 0, n = 0; i < size; i += 5, n++) {
		arr[i] = n;
		arr[i + 1] = n;
		arr[i + 2] = n;
		arr[i + 3] = n;
		arr[i + 4] = n;
	}
}

void	op_unfold4(int	arr[], int size)
{
	for (int i = 0, n = 0; i < size; i += 4, n++) {
		arr[i] = n;
		arr[i + 1] = n;
		arr[i + 2] = n;
		arr[i + 3] = n;
	}
}

void	op_unfold3(int	arr[], int size)
{
	for (int i = 0, n = 0; i < size; i += 3, n++) {
		arr[i] = n;
		arr[i + 1] = n;
		arr[i + 2] = n;
	}
}

void	op_unfold2(int	arr[], int size)
{
	for (int i = 0, n = 0; i < size; i += 2, n++) {
		arr[i] = n;
		arr[i + 1] = n;
	}
}

void	op_unfold1(int	arr[], int size)
{
	for (int i = 0, n = 0; i < size; i++, n++) {
		arr[i] = n;
	}
}

#endif

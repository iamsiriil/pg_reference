#include <stdio.h>

/*
 * Demonstrates pointers and arrays:
 * - Pointer arithmetic to traverse arrays
 * - Array decay into pointers
 */

int main(void)
{
        int arr[5] = {10, 20, 30, 40, 50};
        int *ptr = arr;

        printf("Array elements using pointer:\n");
        for (int i = 0; i < 5; i++)
                printf("  arr[%d] = %d at %p\n", i, *(ptr + i), (void *)(ptr + i));

        return (0);
}

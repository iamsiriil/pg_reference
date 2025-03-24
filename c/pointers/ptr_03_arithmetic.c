#include <stdio.h>

/*
 * Demonstrates pointer arithmetic:
 * - Incrementing, decrementing, pre/post operations
 */

int main(void)
{
        int arr[3] = {5, 10, 15};
        int *ptr = arr;

        printf("Initial pointer:\n");
        printf("  ptr    = %p -> %d\n", (void *)ptr, *ptr);

        printf("\nIncrementing pointer (ptr++):\n");
        printf("  ptr++  = %p -> %d\n", (void *)++ptr, *ptr);

        printf("\nPost-increment (*ptr++):\n");
        printf("  *ptr++ = %d\n", *ptr++);
        printf("  ptr    = %p -> %d\n", (void *)ptr, *ptr);

        return (0);
}

#include <stdio.h>

/*
 * Demonstrates memory exploration:
 * - Accessing adjacent memory blocks
 */

int main(void)
{
        int val = 99, *ptr = &val, i = 5;

        printf("Memory addresses:\n");
        while (i--)
        {
                printf("  Address: %p | Value: %d\n", (void *)ptr, *ptr);
                ptr++;
        }

        return (0);
}

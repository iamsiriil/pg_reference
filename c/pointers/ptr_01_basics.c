#include <stdio.h>

/*
 * Demonstrates basic pointer usage:
 * - Declaring and initializing pointers
 * - Accessing variable addresses and values
 */

int main(void)
{
        int nbr = 42;
        int *ptr = &nbr;

        printf("Variable:\n");
        printf("  nbr    = %d\n", nbr);
        printf("  &nbr   = %p\n", (void *)&nbr);

        printf("\nPointer:\n");
        printf("  ptr    = %p (Address of nbr)\n", (void *)ptr);
        printf("  &ptr   = %p (Address of ptr itself)\n", (void *)&ptr);
        printf("  *ptr   = %d (Dereferencing ptr)\n", *ptr);

        return (0);
}

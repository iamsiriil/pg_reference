#include <stdio.h>

/*
 * Demonstrates multilevel pointers:
 * - Pointer to pointer
 * - Triple pointer
 */

int main(void)
{
        int val = 100;
        int *p1 = &val;
        int **p2 = &p1;
        int ***p3 = &p2;

        printf("Single pointer:\n");
        printf("  *p1   = %d\n", *p1);

        printf("\nDouble pointer:\n");
        printf("  **p2  = %d\n", **p2);

        printf("\nTriple pointer:\n");
        printf("  ***p3 = %d\n", ***p3);

        return (0);
}

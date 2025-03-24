#include <stdio.h>

/*
 * Demonstrates passing pointers to functions:
 * - Modifying values through pointers
 */

void increment(int *num)
{
        (*num)++;
}

int main(void)
{
        int val = 10;

        printf("Before function call: val = %d\n", val);
        increment(&val);
        printf("After function call:  val = %d\n", val);

        return (0);
}

#include <stdio.h>

/*
 * Demonstrates pointers with strings:
 * - String traversal
 */

int main(void)
{
        const char *str = "Hello, World!";
        
        printf("String characters:\n");
        while (*str)
                printf("  %c\n", *str++);

        return (0);
}

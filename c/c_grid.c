#include <stdio.h>
#include <form.h>

void print_table_grid(int rows, int cols) {
    // Top border
    printf("┌");
    for (int i = 0; i < cols; i++) {
        printf("─────┬");
    }
    printf("\b┘\n"); // Replace the last '┬' with '┘'

    // Rows
    for (int i = 0; i < rows; i++) {
        printf("│");
        for (int j = 0; j < cols; j++) {
            printf("    │");
        }
        printf("\b│\n"); // Replace the last '│' with '│'

        if (i < rows - 1) {
            printf("├");
            for (int j = 0; j < cols; j++) {
                printf("─────┼");
            }
            printf("\b┤\n"); // Replace the last '┼' with '┤'
        }
    }

    // Bottom border
    printf("└");
    for (int i = 0; i < cols; i++) {
        printf("─────┴");
    }
    printf("\b┘\n"); // Replace the last '┴' with '┘'
}

int main() {
    int rows = 5;
    int cols = 4;
    print_table_grid(rows, cols);
    printf("%*s\n", 10, "String");
    return 0;
}


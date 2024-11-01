#include <stdio.h>

int main() {
    int n = 3; // Number of rows/columns

    // Print the top row with whitespaces
    for (int i = 0; i < n - 1; i++) {
        printf("  ");
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Print the remaining rows with whitespaces and numbers
    for (int i = 1; i <= n; i++) {
        // Print left side whitespaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print left side numbers
        printf("%d ", i);

        // Print middle whitespaces
        for (int j = 1; j <= n - i - 1; j++) {
            printf("  ");
        }

        // Print middle numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print right side whitespaces
        for (int j = 1; j <= n - i - 1; j++) {
            printf("  ");
        }

        // Print right side numbers
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Print right side whitespaces
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        printf("%d\n", i);
    }

    return 0;
}
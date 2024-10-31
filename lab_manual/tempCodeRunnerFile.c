#include <stdio.h>

int main()
{
    int i, j, k, num = 11;

    // Print the pyramid pattern
    for (i = 1; i <= 3; i++)
    {
        // Print spaces before the numbers
        for (k = 3; k >= i; k--)
        {
            printf("  ");
        }
        // Print the numbers
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        // Print the numbers in reverse order
        for (j = i - 1; j >= 1; j--)
        {
            num--;
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

void drawRectangle(int length, int breadth)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < breadth; j++)
        {
            if (i == 0)
            { // Top border
                if (j == 0)
                {
                    printf("%c", 218); // Top-left corner
                }
                else if (j == breadth - 1)
                {
                    printf("%c", 191); // Top-right corner
                }
                else
                {
                    printf("%c", 196); // Horizontal border
                }
            }
            else if (i == length - 1)
            { // Bottom border
                if (j == 0)
                {
                    printf("%c", 192); // Bottom-left corner
                }
                else if (j == breadth - 1)
                {
                    printf("%c", 217); // Bottom-right corner
                }
                else
                {
                    printf("%c", 196); // Horizontal border
                }
            }
            else
            { // Middle rows
                if (j == 0 || j == breadth - 1)
                {
                    printf("%c", 179); // Vertical borders
                }
                else
                {
                    printf(" "); // Inside space
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int length, breadth;

    printf("Enter length and breadth: ");
    if (scanf("%d %d", &length, &breadth) != 2 || length <= 0 || breadth <= 0)
    {
        printf("Invalid input. Please enter positive integers for length and breadth.\n");
        return 1; // Exit with error code
    }

    drawRectangle(length, breadth);
    return 0;
}
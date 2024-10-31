
// LAB 9
// Problem statement 1: write a programme to display ASCII characters in range 0 to 255 The display should pause after displaying every 10 characters
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i <= 255; i++)
    {
        printf("%d %c\n", i, i);
        if ((i + 1) % 10 == 0)
        {
            system("pause");
        }
    }
    return 0;
}

// Problem statement 2: Write the programme to print whether a user entered number is an Armstrong number,Armstrong number is one in which the sum of the cube of all digits is same as the number
#include <stdio.h>

// Function to calculate the number of digits in a number
int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num)
{
    int sum = 0, temp = num, digits = countDigits(num);

    while (temp != 0)
    {
        int digit = temp % 10;
        int power = 1;

        // Calculate digit raised to the power of the number of digits
        for (int i = 0; i < digits; i++)
        {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }
    return sum == num;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

// LAB 10
// Problem statement: write a programme to display whether a user entered prime number or not
#include <stdio.h>

int main()
{
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}

// LAB 11
// Problem statement modify lab exercise 9 problem 2 to display all armstrong numbers in the range zero to 1000 by using for loop
#include <stdio.h>

int main()
{
    int num, sum, temp, digit;
    for (num = 0; num <= 1000; num++)
    {
        sum = 0;
        temp = num;
        while (temp != 0)
        {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == num)
        {
            printf("%d ", num);
        }
    }
    return 0;
}

// LAB 12
// Problem statement: modify lab exercise 10 to display first 25 prime numbers
#include <stdio.h>

int main()
{
    int num = 2, i, count = 0, flag;
    while (count < 25)
    {
        flag = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}

// LAB 13
// Problem statement 1: Write a programme to find Pythagorean triplets in the range zero to hundred.None of the numbers should repeat
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    for (a = 1; a <= 100; a++)
    {
        for (b = a; b <= 100; b++)
        {
            c = sqrt(a * a + b * b);
            if (c <= 100 && (a * a + b * b == c * c))
            {
                printf("%d %d %d\n", a, b, (int)c);
            }
        }
    }
    return 0;
}

// Problem statement 2: Draw a rectangle for user defined dimensions using for loop. Make use of extended ascii characters. It should look like actual rectangle.
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

// LAB 14
// Problem statement: modify lab exercise 8 Display the menu until the user desires to continue
#include <stdio.h>

void simpleCalculator();

int main()
{
    char cont;

    do
    {
        simpleCalculator();
        printf("Do you want to continue using the calculator? (y/n): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');

    printf("Thank you for using the Simple Calculator. Goodbye!\n");
    return 0;
}

void simpleCalculator()
{
    int choice;
    float num1, num2, result;

    while (1)
    {
        printf("\nSimple Calculator Menu\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit Calculator\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Check if the user wants to exit the calculator
        if (choice == 5)
        {
            printf("Exiting the calculator.\n");
            break; // Exit the calculator loop
        }

        // Prompt for numbers only if a valid operation is chosen
        if (choice >= 1 && choice <= 4)
        {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            else
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid operation.\n");
        }
    }
}

// ADVANCED EXERCISES
//[1] Write a programme to fill entire screen with smiling faces ASCII value = 1.Press any key to terminate.USE kbhit().
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>  // For kbhit() and getch()
#include <unistd.h> // For usleep()

#define ROWS 25
#define COLS 80
#define CHAR_TO_PRINT '😊' // Character to print (smiling face)
#define EMPTY_SPACE ' '    // Character for empty space

void printGrid()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            // Randomly decide whether to print the character or an empty space
            putchar((rand() % 2 == 0) ? CHAR_TO_PRINT : EMPTY_SPACE);
        }
        putchar('\n'); // Move to the next line after each row
    }
}

int main()
{
    srand((unsigned int)time(NULL)); // Seed the random number generator

    while (!kbhit())
    {                    // Loop until a key is pressed
        printGrid();     // Print the grid of characters
        usleep(200000);  // Sleep for 200 milliseconds to slow down the output
        system("clear"); // Clear the console (use "cls" for Windows)
    }

    return 0;
}

//[2] Write a programme to generate all possible combinations o 1,2,3 using for loop
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                if (i != j && j != k && k != i)
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}

//[3] Write a programme for a matchstick Game between the computer and a user. Your programme should ensure that the computer always wins.
#include <stdio.h>

int main()
{
    int matchsticks = 21, user, computer;
    while (matchsticks > 0)
    {
        printf("Enter the number of matchsticks to pick (1-4): ");
        scanf("%d", &user);
        if (user < 1 || user > 4)
        {
            printf("Invalid input. Please try again.\n");
            continue;
        }
        matchsticks -= user;
        printf("Matchsticks left: %d\n", matchsticks);
        if (matchsticks <= 4)
        {
            computer = matchsticks;
        }
        else
        {
            computer = 5 - user;
        }
        matchsticks -= computer;
        printf("Computer picks %d matchsticks.\n", computer);
        printf("Matchsticks left: %d\n", matchsticks);
    }
    printf("Computer wins!\n");
    return 0;
}

//[4] Write a programme to generate following output
//  11
// 2112
// 321123
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
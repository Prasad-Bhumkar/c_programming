#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h> // For Sleep function
#include <conio.h>   // For kbhit() and getch()

// Function prototypes
void displayASCIICharacters();
int countDigits(int num);
int isArmstrong(int num);
void checkArmstrongNumber();
void checkPrimeNumber();
void displayArmstrongNumbers();
void displayFirst25Primes();
void findPythagoreanTriplets();
void drawRectangle();
void simpleCalculator();
void fillScreenWithSmiley();
void generateCombinations();
void matchstickGame();
void generatePyramidPattern();
void displayMenu();

int main()
{
    int choice;

    while (1)
    {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            displayASCIICharacters();
            break;
        case 2:
            checkArmstrongNumber();
            break;
        case 3:
            checkPrimeNumber();
            break;
        case 4:
            displayArmstrongNumbers();
            break;
        case 5:
            displayFirst25Primes();
            break;
        case 6:
            findPythagoreanTriplets();
            break;
        case 7:
            drawRectangle();
            break;
        case 8:
            simpleCalculator();
            break;
        case 9:
            fillScreenWithSmiley();
            break;
        case 10:
            generateCombinations();
            break;
        case 11:
            matchstickGame();
            break;
        case 12:
            generatePyramidPattern();
            break;
        case 0:
            printf("Exiting the program. Goodbye!\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function to display the menu
void displayMenu()
{
    printf("\nMenu:\n");
    printf("1. Display ASCII characters (0-255)\n");
    printf("2. Check if a number is an Armstrong number\n");
    printf("3. Check if a number is prime\n");
    printf("4. Display all Armstrong numbers in the range 0-1000\n");
    printf("5. Display the first 25 prime numbers\n");
    printf("6. Find Pythagorean triplets in the range 0-100\n");
    printf("7. Draw a rectangle with user-defined dimensions\n");
    printf("8. Simple Calculator\n");
    printf("9. Fill screen with smiling faces\n");
    printf("10. Generate all possible combinations of 1, 2, 3\n");
    printf("11. Play Matchstick Game\n");
    printf("12. Generate pyramid pattern\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

// Function to display ASCII characters in range 0 to 255
void displayASCIICharacters()
{
    for (int i = 0; i <= 255; i++)
    {
        printf("%d %c\n", i, i);
        if ((i + 1) % 10 == 0)
        {
            printf("Press Enter to continue...");
            getchar(); // Wait for user input
            getchar(); // Consume the newline character
        }
    }
}

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

// Improved function to check if a number is an Armstrong number
int isArmstrong(int num)
{
    int sum = 0;
    int temp = num;
    int digits = countDigits(num);

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return (sum == num) ? 1 : 0;
}

// Function to check if a number is an Armstrong number
void checkArmstrongNumber()
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
}

// Function to check if a number is prime
void checkPrimeNumber()
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
}

// Function to display all Armstrong numbers in the range 0-1000
void displayArmstrongNumbers()
{
    printf("Armstrong numbers in the range 0-1000:\n");
    for (int i = 0; i <= 1000; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to display the first 25 prime numbers
void displayFirst25Primes()
{
    int count = 0, num = 2;
    printf("First 25 prime numbers:\n");
    while (count < 25)
    {
        int i, flag = 0;
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
    printf("\n");
}

// Function to find Pythagorean triplets in the range 0-100
void findPythagoreanTriplets()
{
    printf("Pythagorean triplets in the range 0-100:\n");
    for (int a = 1; a <= 100; a++)
    {
        for (int b = a; b <= 100; b++)
        {
            int c = (int)sqrt(a * a + b * b);
            if (c <= 100 && a * a + b * b == c * c)
            {
                printf("(%d, %d, %d)\n", a, b, c);
            }
        }
    }
}

// Function to draw a rectangle with user-defined dimensions
void drawRectangle()
{
    int length, breadth;

    while (1)
    {
        printf("Enter length and breadth (positive integers): ");
        if (scanf("%d %d", &length, &breadth) == 2 && length > 0 && breadth > 0)
        {
            break; // Valid input, exit the loop
        }
        printf("Invalid input. Please try again.\n");
        // Clear the input buffer to prevent unexpected behavior
        fflush(stdin);
    }

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

// Function for a simple calculator
void simpleCalculator()
{
    int choice;
    printf("Simple Calculator:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    switch (choice)
    {
    case 1:
        printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case 2:
        printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case 4:
        if (num2 != 0)
        {
            printf("Result: %d / %d = %f\n", num1, num2, (float)num1 / num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid choice! Please try again.\n");
    }
}

// Function to fill the screen with smiling faces
void fillScreenWithSmiley()
{
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        printf((rand() % 2 == 0) ? "dY~S" : " ");
        struct timespec req = {0};
        req.tv_sec = 0;          // seconds
        req.tv_nsec = 200000000; // 200,000 microseconds = 200 milliseconds
        nanosleep(&req, NULL);
    }
}

// Function to generate all possible combinations of 1, 2, 3
void generateCombinations()
{
    printf("All possible combinations of 1, 2, 3:\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
}

// Function to play the Matchstick Game
void matchstickGame()
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
}

// Function to generate a pyramid pattern
void generatePyramidPattern()

{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 3)
            {
                printf("1 ");
            }
            else if (j == 2 || j == 4)
            {
                printf("%d ", i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

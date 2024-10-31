// LAB 3
// Problem statement: write a programme to print Welcome to Pune using escape sequences \n, \t, \r and \".Observe the differences in the output.
// Solution: The following programme prints Welcome to Pune using escape sequences \n, \t, \
//          and \".
#include <stdio.h>
int main()
{
    printf("Welcome\nto\nPune\n");
    printf("Welcome\tto\tPune\t");
    printf("Welcome\\to\\Pune\\");
    printf("Welcome to Pune");
    return 0;
}

// LAB 4
// Problem statement: write a programme to accept marks of 5 subjects from the user and calculate their average. UUseimplicit and explicit type conversion.
// Solution: The following programme accepts marks of 5 subjects from the user and calculates their average using
//           implicit and explicit type conversion.
#include <stdio.h>
#include <conio.h>
int main()
{
    float marks[5], sum = 0, avg;
    int i;
    clrscr();
    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    avg = sum / 5.0;
    printf("Average = %.2f\n", avg);
    return 0;
}

// LAB 5
// Problem statement : Write the programme to calculate the sum of digits of a user and 3rd number. Ensure that your programme can not more than four digits Also print the output in the following manner.If the number is 1234 the output should be 10.
// Solution: The following programme calculates the sum of digits of a user and 3rd number.
//           It ensures that the programme cannot handle more than four digits.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, sum = 0, i;
    clrscr();
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    for (i = 0; i < 4; i++)
    {
        sum += (num1 % 10);
        num1 /= 10;
    }
    sum += num2;
    printf("Sum of digits of first number = %d\n", sum);
    return 0;
}

// ADVANCED EXERCISES
//[1] Write the programme to add two numbers and store the result in a third variable Then print the result
// Solution: The following programme adds two numbers and stores the result in a third variable.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, sum;
    clrscr();
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of two numbers = %d\n", sum);
    return 0;
}
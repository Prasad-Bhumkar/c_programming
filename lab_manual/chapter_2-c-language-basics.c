#include <stdio.h>
#include <conio.h>
#include <limits.h>

// LAB 3
// Problem statement: write a programme to print Welcome to Pune using escape sequences \n, \t, \r and \".Observe the differences in the output.
// Solution: The following programme prints Welcome to Pune using escape sequences \n, \t, \
//          and \".
void printWelcomeMessage() {
    printf("Welcome\nto\nPune\n");
    printf("Welcome\tto\tPune\t");
    printf("Welcome\\to\\Pune\\");
    printf("Welcome to Pune\n");
}

// LAB 4
// Problem statement: write a programme to accept marks of 5 subjects from the user and calculate their average. Use implicit and explicit type conversion.
// Solution: The following programme accepts marks of 5 subjects from the user and calculates their average using
//           implicit and explicit type conversion.
void calculateAverage() {
    float marks[5], sum = 0, avg;
    int i;
    clrscr();
    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    avg = sum / 5.0;
    printf("Average = %.2f\n", avg);
}

// LAB 5
// Problem statement: Write the programme to calculate the sum of digits of a user and 3rd number. Ensure that your programme can not handle more than four digits. Also print the output in the following manner. If the number is 1234 the output should be 10.
// Solution: The following programme calculates the sum of digits of a user and 3rd number.
//           It ensures that the programme cannot handle more than four digits.
void calculateSumOfDigits() {
    int num1, num2, sum = 0, i;
    clrscr();
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    for (i = 0; i < 4; i++) {
        sum += (num1 % 10);
        num1 /= 10;
    }
    sum += num2;
    printf("Sum of digits of first number = %d\n", sum);
}

// ADVANCED EXERCISES
// [1] Write the programme to add two numbers and store the result in a third variable. Then print the result.
// Solution: The following programme adds two numbers and stores the result in a third variable.
void addTwoNumbers() {
    int num1, num2, sum;
    clrscr();
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of two numbers = %d\n", sum);
}

// [2] Add the programme to swap two variables using a 3rd variable and without using a 3rd variable.
// Solution: The following programme swaps two variables using a 3rd variable and without using a
//           3rd variable.
void swapTwoNumbers() {
    int num1, num2, temp;
    clrscr();
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swapping using a 3rd variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Swapped numbers using a 3rd variable: %d %d\n", num1, num2);

    // Swapping without using a 3rd variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Swapped numbers without using a 3rd variable: %d %d\n", num1, num2);
}

// [3] Write a programme to calculate net salary of an employee. Accept basic salary (BS) from the user.
// HRA is 20% of BS, DA is 40% of BS, PF is 10% of gross salary.
// gross salary is BS + HRA + DA, Net salary = Gross salary - PF.
// Solution: The following programme calculates the net salary of an employee after deducting tax and insurance.
void calculateNetSalary() {
    float bs, hra, da, pf, gross, net;
    clrscr();
    printf("Enter basic salary: ");
    scanf("%f", &bs);

    hra = 0.2 * bs;
    da = 0.4 * bs;
    gross = bs + hra + da;
    pf = 0.1 * gross;
    net = gross - pf;

    printf("Basic Salary: %.2f\n", bs);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);
    printf("PF: %.2f\n", pf);
    printf("Net Salary: %.2f\n", net);
}

// [4] Accept a character from the user. It may be alphabet, digit or any character. Print its ASCII value.
// Solution: The following programme accepts a character from the user and prints its ASCII value.
void printAsciiValue() {
    char ch;
    clrscr();
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c = %d\n", ch, ch);
}

// [5] Print the following table for given data types. Student is expected to print the correct information for size, range, and format specifier columns.
// Table contains these columns = data types, size, range, and format specifiers. Data types are char, int, float, double, long int, long double.
// Solution: The following programme prints the table for different data types in C.
void printDataTypeTable() {
    printf("Data Types\tSize\t\tRange\t\t\tFormat Specifiers\n");
    printf("char\t\t%zu\t\t-128 to 127\t\t%%c\n", sizeof(char));
    printf("int\t\t%zu\t\t%d to %d\t\t%%d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("float\t\t%zu\t\t1.2E-38 to 3.4E+38\t%%f\n", sizeof(float));
    printf("double\t\t%zu\t\t2.3E-308 to 1.7E+308\t%%lf\n", sizeof(double));
    printf("long int\t%zu\t\t%ld to %ld\t\t%%ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("long double\t%zu\t\t3.4E-4932 to 1.1E+4932\t%%Lf\n", sizeof(long double));
}

int main() {
    printWelcomeMessage();
    calculateAverage();
    calculateSumOfDigits();
    addTwoNumbers();
    swapTwoNumbers();
    calculateNetSalary();
    printAsciiValue();
    printDataTypeTable();
    return 0;
}
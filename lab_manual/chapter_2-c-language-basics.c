#include <stdio.h>
#include <limits.h>

// ... (Function definitions)
// LAB 3: Printing Welcome to Pune with escape sequences
void printWelcomeMessage() {
    printf("Welcome\nto\nPune\n");
    printf("Welcome\tto\tPune\t");
    printf("Welcome\\to\\Pune\\\n"); // Consistent newline added
    printf("Welcome to Pune\n");
}

// LAB 4: Calculate the average of 5 marks
void calculateAverage() {
    float marks[5], sum = 0, avg;
    int i;
    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    avg = sum / 5.0;
    printf("Average = %.2f\n", avg);
}

// LAB 5: Sum of digits and another number 
void calculateSumOfDigits() {
    int num1, num2, sum = 0, i;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    for (i = 0; i < 4 && num1 > 0; i++) { // Ensure loop processes all digits of num1
        sum += (num1 % 10);
        num1 /= 10;
    }
    sum += num2;
    printf("Sum of digits of first number and second number = %d\n", sum);
}

// ADVANCED EXERCISES

// [1] Add two numbers 
void addTwoNumbers() {
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of two numbers = %d\n", sum);
}

// [2] Swap two numbers
void swapTwoNumbers() {
    int num1, num2, temp;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swapping using a 3rd variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Swapped numbers using a 3rd variable: %d %d\n", num1, num2);

    // Swapping without a 3rd variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Swapped numbers without using a 3rd variable: %d %d\n", num1, num2);
}

// [3] Calculate net salary 
void calculateNetSalary() {
    float bs, hra, da, pf, gross, net;
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

// [4] Print the ASCII value of a character
void printAsciiValue() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Add space before %c to handle newline characters
    printf("ASCII value of %c = %d\n", ch, ch);
}

// [5] Print the data type table
void printDataTypeTable() {
    printf("Data Types\t \tSize\t\tRange\t\t\tFormat Specifiers\n");
    printf("char\t\t\t%zu\t\t-128 to 127\t\t\t%%c\n", sizeof (char));
    printf("int\t\t\t%zu\t\t%d to %d \t%%d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("float\t\t\t%zu\t\t1.2E-38 to 3.4E+38\t\t%%f\n", sizeof(float));
    printf("double\t\t\t%zu\t\t2.3E-308 to 1.7E+308\t\t%%lf\n", sizeof(double));
    printf("long\t\t\t%zu\t\t-9.2E+18 to 9.2E+18\t\t%%ld\n", sizeof(long));
    printf("short\t\t\t%zu\t\t-3.2E+4 to 3.2E+4\t\t%%hd\n", sizeof(short));
    printf("long long\t\t%zu\t\t-9.2E+18 to 9.2E+18\t\t%%lld\n", sizeof(long long));
    printf("unsigned char\t\t%zu\t\t0 to 255\t\t\t%%c\n", sizeof(unsigned char));
    printf("unsigned int\t\t%zu\t\t0 to 4.2E+9\t\t\t%%u\n", sizeof(unsigned int));
    printf("unsigned long\t\t%zu\t\t0 to 4.2E+9\t\t\t%%lu\n", sizeof(unsigned long));
    printf("unsigned short\t\t%zu\t\t0 to 6.5E+4\t\t\t%%hu\n", sizeof(unsigned short));
    printf("unsigned long long\t%zu\t\t0 to 1.8E+19\t\t\t%%llu\n", sizeof(unsigned long long));
}

int main() {
    int choice;

    do {
        printf("\n\nMENU:\n");
        printf("1. Print Welcome to Pune\n");
        printf("2. Calculate Average of 5 Marks\n");
        printf("3. Calculate Sum of Digits\n");
        printf("4. Add Two Numbers\n");
        printf("5. Swap Two Numbers\n");
        printf("6. Calculate Net Salary\n");
        printf("7. Print ASCII Value of a Character\n");
        printf("8. Print Data Type Table\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printWelcomeMessage();
                break;
            case 2:
                calculateAverage();
                break;
            case 3:
                calculateSumOfDigits();
                break;
            case 4:
                addTwoNumbers();
                break;
            case 5:
                swapTwoNumbers();
                break;
            case 6:
                calculateNetSalary();
                break;
            case 7:
                printAsciiValue();
                break;
            case 8:
                printDataTypeTable();
                break;
            case 9:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 9.\n");
        }
    } while (choice != 9); 

    return 0;
}
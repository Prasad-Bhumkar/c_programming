#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

// LAB 6
// [1] Problem statement: write the programme to find leap year by using if-else and logical operators(&& and ||)
void checkLeapYear() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
}

// [2] Problem statement: write a programme to find leap year by using conditional or ternary operator
void checkLeapYearTernary() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("%d is %s leap year\n", year, (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? "a" : "not a");
}

// LAB 7
// [3] Problem statement: write the programme to accept the basic salary and total sales amount for sales person and Calculate Commission according to the sales amount. Display the net salary and the commission earned
void calculateCommission() {
    float basic_salary, total_sales, commission, net_salary;
    printf("\nEnter the basic salary: ");
    scanf("%f", &basic_salary);
    printf("Enter the total sales amount: ");
    scanf("%f", &total_sales);

    if (total_sales >= 5000 && total_sales <= 7500) {
        commission = (total_sales * 3) / 100;
    } else if (total_sales >= 7501 && total_sales <= 10500) {
        commission = (total_sales * 8) / 100;
    } else if (total_sales >= 10501 && total_sales <= 15000) {
        commission = (total_sales * 11) / 100;
    } else if (total_sales > 15000) {
        commission = (total_sales * 15) / 100;
    } else {
        commission = 0;
    }

    net_salary = basic_salary + commission;
    printf("Commission earned: %.2f\n", commission);
    printf("Net salary: %.2f\n", net_salary);
}

// LAB 8
// [4] Problem statement: by using a switch case. Write a menu to one programme to perform basic calculations(Addition, subtraction, multiplication and division)
void simpleCalculator() {
    int choice;
    float num1, num2, result;
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    switch (choice) {
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
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
}

// ADVANCED EXERCISES
// [5] Write a programme to find maximum of three numbers using conditional operators
void findMaximum() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    printf("Maximum of three numbers is: %d\n", max);
}

// [6] Enter a date in dd/mm/yy format.Write a programme to print total number of days in the given month
void printDaysInMonth() {
    int day, month, year;
    printf("Enter the date in dd/mm/yy format: ");
    scanf("%d/%d/%d", &day, &month, &year);
    int daysInMonth;
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }
    printf("Total number of days in the given month is: %d\n", daysInMonth);
}

int main() {
    int choice;
    while (1) {
        printf("Menu:\n");
        printf("1. Check Leap Year (if-else)\n");
        printf("2. Check Leap Year (ternary operator)\n");
        printf("3. Calculate Commission\n");
        printf("4. Simple Calculator\n");
        printf("5. Find Maximum of Three Numbers\n");
        printf("6. Print Days in Month\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                checkLeapYear();
                break;
            case 2:
                checkLeapYearTernary();
                break;
            case 3:
                calculateCommission();
                break;
            case 4:
                simpleCalculator();
                break;
            case 5:
                findMaximum();
                break;
            case 6:
                printDaysInMonth();
                break;
            case 7:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
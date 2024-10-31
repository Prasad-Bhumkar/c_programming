// LAB 6
// Problem statement: write the programme to find leap year by using if-else and logical operators(&& and ||)
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}

// Problem statement: write a programme to find leap year by using conditional or ternary operator
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("%d is %s leap year", year, (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? "a" : "not a");
    return 0;
}


//LAB 7
//Problem statement: write the programme to accept the basic salary and total sales amount for sales person and Calculate Commission according to the sales amount. Display the net salary and the commission earned The range is as follows
//5000 To 7500 = 3% commission
//7501 to 10500 = 8% commission
//10,501 to 15,000 = 11% commission
//15,000 and above = 15% commission
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    float basic_salary, total_sales, commission, net_salary;
    printf("\nEnter the basic salary: ");
    scanf("%f", &basic_salary);
    printf("Enter the total sales amount: ");
    scanf("%f", &total_sales);

    if (total_sales >= 5000 && total_sales <= 7500)
    {
        commission = (total_sales * 3) / 100;
    }
    else if (total_sales >= 7501 && total_sales <= 10500)
    {
        commission = (total_sales * 8) / 100;
    }
    else if (total_sales >= 10501 && total_sales <= 15000)
    {
        commission = (total_sales * 11) / 100;
    }
    else if (total_sales > 15000)
    {
        commission = (total_sales * 15) / 100;
    }
    else
    {
        commission = 0;
    }

    net_salary = basic_salary + commission;
    printf("Commission earned: %.2f\n", commission);
    printf("Net salary: %.2f\n", net_salary);

    return 0;
}

//LAB 8
//Problem statement: by using a switch case. Write a menu to one programme to perform basic calculations(Addition, subtraction, multiplication and divisionn)
//Solution: The following code is a simple C program that performs basic calculations using a switch case statement
#include <stdio.h>
int main()
{
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
            printf("Invalid choice!\n");
    }
    return 0;
}

//ADVANCED EXERCISES
//[1] Write a programme to find maximum of three numbers using conditional operators
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    printf("Maximum of three numbers is: %d", max);
    return 0;
}

//[2] Enter a date in dd/mm/yy format.Write a programme to print total number of days in a month In words
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int day, month, year;
    printf("Enter date in dd/mm/yy Format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    int daysInMonth;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        daysInMonth = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        daysInMonth = 30;
    }
    else if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            daysInMonth = 29;
        }
        else
        {
            daysInMonth = 28;
        }
    }
    else
    {
        printf("Invalid month!\n");
        return 0;
    }

    char* daysInWords[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "thirty", "thirty one"};

    printf("Total number of days in the month is: %s\n", daysInWords[daysInMonth]);

    return 0;
}

//[3] Accept a number from user and find its absolute value.Absolute value is positive value Use conditional operator.
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int absolute_value = (num < 0) ? -num : num;
    printf("Absolute value of %d is: %d", num, absolute_value);
    return 0;
}

//[4] Write a programme to convert user entered character to its opposite case.programme should also flash an error message if the character entered by the user is not an alphabet
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch))
    {
        char opposite_case = (islower(ch)) ? toupper(ch) : tolower(ch);
        printf("Opposite case of '%c' is '%c'\n", ch, opposite_case);
    }
    else
    {
        printf("Error! '%c' is not an alphabet.\n", ch);
    }

    return 0;
}

//[5] Write a programme to accept an EMPID and DEPTNO As numeric data and design code as character data.Display the entire data with proper messages
//dept no|dept name|designation code|designation
//10|purchase|M|manager
//20|sales|A|Analyst
//30|production|W|worker
//40|Marketing|S|sales-person
//50|accounts|C|clerk
//if empid is 10 then message should be displayed like 'employee with empid 10 works in purchase dept as manager'
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
int main()
{
    int empid, deptno;
    printf("Enter EMPID: ");
    scanf("%d", &empid);
    printf("Enter DEPTNO: ");
    scanf("%d", &deptno);

    char dept_name[20], designation_code, designation[20];

    switch (deptno)
    {
        case 10:
            strcpy(dept_name, "purchase");
            designation_code = 'M';
            strcpy(designation, "manager");
            break;
        case 20:
            strcpy(dept_name, "sales");
            designation_code = 'A';
            strcpy(designation, "Analyst");
            break;
        case 30:
            strcpy(dept_name, "production");
            designation_code = 'W';
            strcpy(designation, "worker");
            break;
        case 40:
            strcpy(dept_name, "Marketing");
            designation_code = 'S';
            strcpy(designation, "sales-person");
            break;
        case 50:
            strcpy(dept_name, "accounts");
            designation_code = 'C';
            strcpy(designation, "clerk");
            break;
        default:
            printf("Invalid DEPTNO!\n");
            return 0;
    }

    printf("Employee with EMPID %d works in %s dept as %s\n", empid, dept_name, designation);

    return 0;
}
//LAB 2
#include <stdio.h>

// Function to calculate the area of a circle
float calculateCircleArea(int radius) {
    const float pi = 3.14159;
    return pi * (float)radius * (float)radius;
}

// Function to find the maximum of two numbers
int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

// Function to check if a number is odd or even
void checkOddOrEven(int num) {
    if (num % 2 == 0) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }
}

// Function to check if a number is positive, negative or zero
void checkNumberType(int num) {
    if (num > 0) {
        printf("Number is positive\n");
    } else if (num < 0) {
        printf("Number is negative\n");
    } else {
        printf("Number is zero\n");
    }
}

// Function to check if a person is eligible for a license
void checkLicenseEligibility(int age) {
    if (age >= 18) {
        printf("You are eligible for license\n");
    } else {
        printf("You are not eligible for license\n");
    }
}

// Function to print multiples of five less than 100
void printMultiplesOfFive() {
    for (int i = 5; i < 100; i += 5) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function to calculate the sum of even numbers from 1 to 20
int calculateSumOfEvenNumbers() {
    int sum = 0;
    for (int i = 2; i <= 20; i += 2) {
        sum += i;
    }
    return sum;
}

// Function to calculate the factorial of a number
long long calculateFactorial(int num) {
    long long factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

// Function to check if a number is prime
void checkPrimeNumber(int num) {
    int flag = 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
}

// Function to calculate the sum of digits of a number
int calculateSumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int choice;
    printf("Enter your choice:\n");
    printf("1. Calculate the area of a circle\n");
    printf("2. Find the maximum of two numbers\n");
    printf("3. Check if a number is odd or even\n");
    printf("4. Check if a number is positive, negative or zero\n");
    printf("5. Check if a person is eligible for a license\n");
    printf("6. Print multiples of five less than 100\n");
    printf("7. Calculate the sum of even numbers from 1 to 20\n");
    printf("8. Calculate the factorial of a number\n");
    printf("9. Check if a number is prime\n");
    printf("10. Calculate the sum of digits of a number\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int radius;
            printf("Enter the radius: ");
            scanf("%d", &radius);
            if (radius < 0) {
                printf("Error: Radius cannot be negative.\n");
                return 1;
            }
            float area = calculateCircleArea(radius);
            printf("Area of circle is %.2f\n", area);
            break;
        }
        case 2: {
            int a, b;
            printf("Enter the first number: ");
            scanf("%d", &a);
            printf("Enter the second number: ");
            scanf("%d", &b);
            int max = findMaximum(a, b);
            printf("Maximum of two numbers is %d\n", max);
            break;
        }
        case 3: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            checkOddOrEven(num);
            break;
        }
        case 4: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            checkNumberType(num);
            break;
        }
        case 5: {
            int age;
            printf("Enter your age: ");
            scanf("%d", &age);
            checkLicenseEligibility(age);
            break;
        }
        case 6:
            printMultiplesOfFive();
            break;
        case 7: {
            int sum = calculateSumOfEvenNumbers();
            printf("Sum of even numbers is %d\n", sum);
            break;
        }
        case 8: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            long long factorial = calculateFactorial(num);
            printf("Factorial of %d is %lld\n", num, factorial);
            break;
        }
        case 9: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            checkPrimeNumber(num);
            break;
        }
        case 10: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            int sum = calculateSumOfDigits(num);
            printf("Sum of the digits is %d\n", sum);
            break;
        }
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
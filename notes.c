// Chapter 1: Logic Development

// Logic Development: The Foundation of Programming
// Logic development is like building a roadmap for your code. It helps you break down complex problems into bite-sized pieces, making it easier to navigate through programming challenges.


// Fundamentals of Logical Thinking
// Logical thinking is your mental toolkit for dissecting problems. With it, you can identify patterns and make decisions that lead to efficient coding.

// Problem-Solving Techniques
// Problem-solving techniques are your secret weapons for tackling challenges. By breaking problems into smaller parts, you can craft clear, actionable plans to find solutions.


// Chapter 2: Language Basics

// Need and Features of C Language
// C is the Swiss Army knife of programming languages—versatile and powerful! Its portability, efficiency, and flexibility make it a developer favorite for diverse applications.

// Variables and Basic Data Types in C
// Variables are like labeled boxes for your data. In C, you have different types of boxes for different data: 
// - int for integers, 
// - char for characters, 
// - float for decimals.
// Syntax: type variable_name; 
// Example:
int age = 25; // Storing the age of a person
char grade = 'A'; // Storing a letter grade
float height = 5.9; // Storing height in feet

// Expressions in Programs
// Expressions are the heartbeats of your code, combining variables and operators to produce results. They allow you to perform calculations and comparisons.
// Example:
int a = 5, b = 10;
int result = a + b; // result is now 15

// Input/Output Library Functions
// Input/output functions are your program's way of interacting with the user. Use printf() to show messages and scanf() to capture user input.
// Example: 
int userAge;
printf("Enter your age: ");
scanf("%d", &userAge); // User inputs their age

// Typecasting
// Typecasting is like changing the outfit of a variable to fit a different type. It ensures compatibility when performing operations across different data types.
// Syntax: (type) variable_name; 
// Example:
int integerValue = 10;
float floatValue = (float) integerValue; // Now floatValue is 10.0


// Chapter 3: Decision Making and Selection Control Statements

// Types of Statements in C
// C statements dictate how your program flows, making decisions based on conditions. They are the control mechanisms that guide your code's execution.

// Decision-Making Statements: if, if-else, Nested-if-else
// The if statement is your decision-maker, executing code when conditions are met. The if-else provides an alternative, while nested if-else handles multiple conditions.
// Example:
int score = 85;
if (score >= 90) {
    printf("Grade: A\n");
} else if (score >= 80) {
    printf("Grade: B\n");
} else {
    printf("Grade: C\n");
}

// Ternary Operator and Switch Statement
// The ternary operator is a shorthand for if-else, while the switch statement simplifies handling multiple cases based on a variable's value.
// Syntax: 
int day = 3;
const char* dayName = (day == 1) ? "Monday" : (day == 2) ? "Tuesday" : "Other"; // Ternary
printf("Day: %s\n", dayName);

switch (day) {
    case 1:
        printf("It's Monday!\n");
        break;
    case 2:
        printf("It's Tuesday!\n");
        break;
    default:
        printf("It's some other day!\n");
}


// Chapter 4: Loops I

// While, For, Do-While Loops
// Loops are your repetitive workhorses, executing code multiple times. The while loop runs while a condition is true, the for loop iterates a set number of times, and the do-while guarantees at least one run.
// Example:
int count = 0;
while (count < 5) {
    printf("Count is: %d\n", count);
    count++;
}

for (int i = 0; i < 5; i++) {
    printf("Iteration: %d\n", i);
}

int doWhileCount = 0;
do {
    printf("Do-While Count: %d\n", doWhileCount);
    doWhileCount++;
} while (doWhileCount < 3);


// Chapter 5: Loops II

// Nested Loops and Their Execution
// Nested loops are loops within loops, allowing complex iterations. The outer loop controls the number of times the inner loop runs, creating a multi-layered execution.
// Example:
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
        printf("Outer Loop: %d, Inner Loop: %d\n", i, j);
    }
}

// Branching Statements: Continue, Break Statement, Comma Operator
// Branching statements modify loop execution. The continue skips the current iteration, break exits the loop, and the comma operator allows multiple expressions in a single line.
// Example:
for (int i = 0; i < 5; i++) {
    if (i == 2) continue; // Skip this iteration
    if (i == 4) break;    // Exit the loop
    printf("Iteration: %d\n", i);
}


// Chapter 6: Functions I

// Function Definition, Declaration Rules
// Functions are reusable code blocks that simplify complex tasks. A definition outlines the function's purpose, while a declaration informs the compiler about its existence.
// Syntax: 
return_type function_name(parameters) {
    // Code
}

// Example:
int add(int a, int b) {
    return a + b;
}
int result = add(5, 3); // result is now 8


// Chapter 7: Functions II

// Passing Arguments by Address
// Passing by address allows a function to modify the original variable, as it receives the memory address of the variable.
// Example:
void increment(int *a) {
    (*a)++;
}
int x = 10;
increment(&x); // x is now 11


// Chapter 8: Storage Classes and Preprocessor

// Storage Classes, Preprocessor Directives
// Storage classes define the scope and lifetime of variables, while preprocessor directives include header files, define macros, and perform other tasks before compilation.
// Example:
#include <stdio.h> // Include header file
#define PI 3.14    // Define macro


// Chapter 9: Arrays I - 1D Array

// Declaring and Initializing Arrays
// Arrays are collections of variables of the same data type stored in contiguous memory locations. Declaring an array involves specifying the data type and size, while initializing assigns values to its elements.
// Syntax: data_type array_name[size];
// Example:
int scores[5] = {90, 80, 70, 60, 50};

// Array Input/Output Operations
// Array input/output operations involve reading input from the user and displaying output to the screen. In C, scanf() reads input, and printf() displays output.
// Example:
int scores[5];
printf("Enter scores: ");
for (int i = 0; i < 5; i++) {
    scanf("%d", &scores[i]);
}

// Passing Arrays to Functions
// Passing arrays to functions involves passing the base address of the array and the size of the array, allowing the function to access and modify the elements.
// Example:
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
print_array(scores, 5); // Print the scores array


// Chapter 10: Sorting

// Sorting Methods: Bubble Sort, Merge Sort
// Sorting methods arrange array elements in a specific order. Bubble sort is a simple algorithm that repeatedly swaps adjacent elements if they are in the wrong order, while merge sort is a more efficient algorithm that divides the array into smaller subarrays and merges them back together in sorted order.
// Example:
void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
bubble_sort(scores, 5); // Sort the scores array


// Chapter 11: Strings

// Declaring and Initializing Strings
// Strings are arrays of characters terminated by a null character. Declaring a string involves specifying the data type and size, while initializing assigns a value to the string.
// Syntax: char string_name[size];
// Example:
char name[20] = "John Doe";

// String Operations Using Dereferencing Operators and Pointers
// String operations using dereferencing operators and pointers involve using pointers to access and modify string characters.
// Example:
char name[20] = "John Doe";
char *ptr = name;
for (int i = 0; i < strlen(name); i++) {
    printf("%c", *(ptr + i));
}
printf("\n");


// Chapter 12: 2D Arrays and Dynamic Memory Allocation

// Declaring, Initializing, and Using 2D Arrays
// 2D arrays are arrays of arrays. Declaring a 2D array involves specifying the data type and size, while initializing assigns values to its elements.
// Syntax: data_type array_name[row_size][col_size];
// Example:
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

// Passing 2D Arrays to Functions
// Passing 2D arrays to functions involves passing the base address of the array and the size of the array, allowing the function to access and modify the elements.
// Example:
void print_matrix(int arr[][4], int row_size) {
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
print_matrix(matrix, 3); // Print the matrix


// Chapter 13: Structures I

// Structure Basics, Using Typedef
// Structures are collections of variables of different data types stored in contiguous memory locations. Using typedef allows you to define a new data type that represents a structure.
// Syntax: typedef struct { ... } struct_name;
// Example:
typedef struct {
    int x;
    int y;
} point;

// Data Storage/Display in Structures
// Data storage/display in structures involves using the dot operator to access and modify structure members.
// Example:
point p;
p.x = 10;
p.y = 20;
printf("(%d, %d)\n", p.x, p.y);

// Passing Structures by Value/Address to Functions
// Passing structures by value/address to functions involves passing the structure as an argument to a function, allowing the function to access and modify the structure members.
// Example:
void print_point(point p) {
    printf("(%d, %d)\n", p.x, p.y);
}
print_point(p); // Print the point


// Chapter 14: Structures II

// Pointers to Structures, Nested Structures
// Pointers to structures involve using pointers to access and modify structure members. Nested structures involve defining a structure within another structure.
// Example:
point *ptr = &p;
ptr->x = 10;
ptr->y = 20;

// Dynamic Memory Allocation in Structures
// Dynamic memory allocation in structures involves allocating memory at runtime using built-in functions such as malloc(), calloc(), and realloc().
// Example:
point *ptr = (point *) malloc(sizeof(point));
ptr->x = 10;
ptr->y = 20;

// Unions, Differences between Structures and Unions
// Unions are similar to structures, but they allow you to store different types of data in the same memory location. The main difference between structures and unions is that structures allocate separate memory for each member, while unions allocate a single block of memory that can be used to store different types of data.
// Syntax: union { ... } union_name;
// Example:
union {
    int x;
    float y;
} u;

// Enumerated Data Type
// Enumerated data types are user-defined data types that consist of a set of named values. Enumerated data types are used to define a set of named constants that have underlying numeric values.
// Syntax: enum { ... } enum_name;
// Example:
enum { RED, GREEN, BLUE } color;
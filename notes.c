// Chapter 1: Logic Development

// Logic Development: The Foundation of Programming
// Logic development is the art of transforming complex problems into manageable tasks. By analyzing data and crafting a step-by-step plan, you build a solid framework for coding that enhances your problem-solving skills.

// Fundamentals of Logical Thinking
// Logical thinking is your toolkit for analyzing information, spotting patterns, and making sound decisions. It's the bedrock of programming, empowering you to write code that is both efficient and effective.

// Problem-Solving Techniques
// Problem-solving techniques are your strategies for tackling complex challenges. By dissecting problems into smaller parts, you can analyze data and formulate a clear plan to arrive at a solution.


// Chapter 2: Language Basics

// Need and Features of C Language
// C is a versatile powerhouse in programming, widely used in operating systems and embedded systems. Its key features—portability, efficiency, and flexibility—make it a favorite among developers.

// Variables and Basic Data Types in C
// Variables are your storage containers for data in a program. In C, basic data types include:
// - int: Integer values
// - char: Single characters
// - float: Decimal numbers

// Syntax: type variable_name;
// Example: int age;

// Expressions in Programs
// Expressions are the building blocks of your code, combining variables, operators, and constants to yield a value. They are essential for performing arithmetic, comparisons, and logical operations.

// Example: result = a + b; (where a and b are variables)

// Input/Output Library Functions
// Input/output functions are your means of communication with users. Use printf() to display output and scanf() to read input.

// Example: 
printf("Enter your age: ");
scanf("%d", &age);

// Typecasting
// Typecasting allows you to convert a variable from one data type to another, ensuring compatibility when performing operations.

// Syntax: (type) variable_name;
// Example: float result = (float) integer_value;


// Chapter 3: Decision Making and Selection Control Statements

// Types of Statements in C
// C offers a variety of statements, including decision-making statements, loops, and functions. Decision-making statements control the flow of your program based on specific conditions.

// Decision-Making Statements: if, if-else, Nested-if-else
// The if statement executes code when a condition is true. The if-else statement provides a fallback for when the condition is false, while nested if-else allows for multiple conditions.

// Example:
if (condition) {
    // Code if true
} else {
    // Code if false
}

// Ternary Operator and Switch Statement
// The ternary operator is a compact way to write an if-else statement, while the switch statement allows for cleaner handling of multiple cases based on a variable's value.

// Syntax: 
condition ? expression1 : expression2; // Ternary
switch (variable) {
    case value1:
        // Code
        break;
    // ...
}


// Chapter 4: Loops I

// While, For, Do-While Loops
// Loops are your tools for executing code repeatedly. The while loop runs while a condition is true; the for loop iterates a specific number of times, and the do-while loop ensures at least one execution.

// Example:
while (condition) {
    // Code
}
for (int i = 0; i < n; i++) {
    // Code
}
do {
    // Code
} while (condition);


// Chapter 5: Loops II

// Nested Loops and Their Execution
// Nested loops allow you to run multiple loops within each other, enabling complex iterations. The execution order depends on the outer and inner loop conditions.

// Example:
for (int i = 0; i < outer_limit; i++) {
    for (int j = 0; j < inner_limit; j++) {
        // Code
    }
}

// Branching Statements: Continue, Break Statement, Comma Operator
// Branching statements control the flow within loops. The continue statement skips the current iteration, while break exits the loop. The comma operator allows multiple expressions in a single statement.

// Example:
for (int i = 0; i < n; i++) {
    if (condition) continue; // Skip this iteration
    if (condition) break;    // Exit the loop
}


// Chapter 6: Functions I

// Function Definition, Declaration Rules
// Functions are reusable blocks of code that can be called multiple times. A function definition includes the function name, return type, and parameters, while a function declaration includes the function name, return type, and parameters.

// Syntax: 
return_type function_name(parameters) {
    // Code
}

// Types of Functions, Passing Arguments by Value
// C offers various function types, including void functions, value-returning functions, and recursive functions. Passing arguments by value means the function receives a copy of the original variable.

// Example:
 int add(int a, int b) {
    return a + b;
}


// Chapter 7: Functions II

// Passing Arguments by Address
// Passing arguments by address allows the function to modify the original variable, as it receives the memory address of the variable.

// Example:
void increment(int *a) {
    (*a)++;
}

// Pointers, Using Pointers
// Pointers are variables that store memory addresses. Using pointers enables indirect access and modification of variables.

// Example:
int x = 10;
int *ptr = &x; // ptr points to x


// Chapter 8: Storage Classes and Preprocessor

// Storage Classes, Preprocessor Directives
// Storage classes specify the scope and lifetime of variables, while preprocessor directives include header files, define macros, and perform other tasks before compilation.

// Example:
#include <stdio.h> // Include header file
#define PI 3.14    // Define macro


// Chapter 9: Arrays I - 1D Array

// Declaring and Initializing Arrays
// Arrays are collections of variables of the same data type stored in contiguous memory locations. Declaring an array involves specifying the data type and size, while initializing an array assigns values to its elements.

// Syntax: data_type array_name[size];
// Example: int scores[5];

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
}

// Pointer Arithmetic Rules
// Pointer arithmetic rules involve using pointers to access and modify array elements. The syntax is pointer_name + offset.

// Example:
int scores[5];
int *ptr = scores;
for (int i = 0; i < 5; i++) {
    printf("%d ", *(ptr + i));
}


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


// Chapter 11: Strings

// Declaring and Initializing Strings
// Strings are arrays of characters terminated by a null character. Declaring a string involves specifying the data type and size, while initializing a string assigns a value to the string.

// Syntax: char string_name[size];
// Example: char name[20];

// String Operations Using Dereferencing Operators and Pointers
// String operations using dereferencing operators and pointers involve using pointers to access and modify string characters.

// Example:
char name[20] = "John";
char *ptr = name;
for (int i = 0; i < strlen(name); i++) {
    printf("%c", *(ptr + i));
}


// Chapter 12: 2D Arrays and Dynamic Memory Allocation

// Declaring, Initializing, and Using 2D Arrays
// 2D arrays are arrays of arrays. Declaring a 2D array involves specifying the data type and size, while initializing a 2D array assigns values to its elements.

// Syntax: data_type array_name[row_size][col_size];
// Example: int matrix[3][4];

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

// Dynamic Memory Allocation: Built-in Functions, Deallocating with 'free()'
 // Dynamic memory allocation involves allocating memory at runtime using built-in functions such as malloc(), calloc(), and realloc(). Deallocating memory involves using the free() function to release the allocated memory.

// Example:
int *ptr = (int *) malloc(sizeof(int));
free(ptr);


// Chapter 13: Structures I

// Structure Basics, Using Typedef
// Structures are collections of variables of different data types stored in contiguous memory locations. Using typedef allows you to define a new data type that represents a structure.

// Syntax: typedef struct { ... } struct_name;
// Example: typedef struct { int x; int y; } point;

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

// Array of Structures
// An array of structures is a collection of structures stored in contiguous memory locations. Declaring an array of structures involves specifying the data type and size of the array.

// Syntax: struct_name array_name[size];
// Example: point points[5];


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

// Unions, Differences between Structures and Unions
// Unions are similar to structures, but they allow you to store different types of data in the same memory location. The main difference between structures and unions is that structures allocate separate memory for each member, while unions allocate a single block of memory that can be used to store different types of data.

// Syntax: union { ... } union_name;
// Example: union { int x; float y; } u;

// Enumerated Data Type
// Enumerated data types are user-defined data types that consist of a set of named values. Enumerated data types are used to define a set of named constants that have underlying numeric values.

// Syntax: enum { ... } enum_name;
// Example: enum { RED, GREEN, BLUE } color;
#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    if (b == 0) 
    {
        printf("Error: Division by zero is not allowed.\n");
        return -1; 
    }
    return (float)a / b;
}

int main() {
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    
    int addresult = add(a, b);
    int subresult = sub(a, b);
    int mulresult = mul(a, b);
    float divresult = div(a, b);

    printf("Addition = %d\n", addresult);
    printf("Subtraction = %d\n", subresult);
    printf("Multiplication = %d\n", mulresult);

    if (b != 0) 
    {
        printf("Division = %f\n", divresult);
    } 

    return 0;
}

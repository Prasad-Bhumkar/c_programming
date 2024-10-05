#include<stdio.h>

void squareofnum();

void squareofnum()
{
    int num,square;
    printf("Enter a number:\n");
    scanf("%d",&num);

    square=num*num;
    printf("Square of Number:%d",square);
}

int main()
{
    squareofnum();
    return 0;
}
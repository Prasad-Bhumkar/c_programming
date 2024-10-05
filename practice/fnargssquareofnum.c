#include<stdio.h>

void squareofnum(int);

void squareofnum(int num)
{
    int square;

    square=num*num;
    printf("Square of Number:%d",square);
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    squareofnum(num);
    return 0;
}
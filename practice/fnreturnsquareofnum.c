#include<stdio.h>

int squareofnum();

int squareofnum()
{
    int num,square;
    printf("Enter a number:\n");
    scanf("%d",&num);

    square=num*num;
    return square;
    
}

int main()
{
    int result = squareofnum();
    printf("Square of Number:%d",result);
    return 0;
}
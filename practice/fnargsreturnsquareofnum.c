#include<stdio.h>

int squareofnum(int);

int squareofnum(int num)
{
    int square;
    

    square=num*num;
    return square;
    
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int result = squareofnum(num);
    printf("Square of Number:%d",result);
    return 0;
}
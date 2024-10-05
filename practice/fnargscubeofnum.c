#include<stdio.h>

void squareofnum(int);

void squareofnum(int num)
{
    int cube;

    cube=num*num*num;
    printf("Cube of Number:%d",cube);
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    squareofnum(num);
    return 0;
}
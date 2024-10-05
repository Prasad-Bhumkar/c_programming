#include<stdio.h>

void cubeofnum();

void cubeofnum()
{
    int num,cube;
    printf("Enter a number:\n");
    scanf("%d",&num);
    cube=num*num*num;
    printf("Cube of Number:%d",cube);
}

int main()
{
    cubeofnum();
    return 0;
}
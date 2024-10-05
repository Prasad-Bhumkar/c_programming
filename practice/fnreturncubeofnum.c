#include<stdio.h>

int cubeofnum();

int cubeofnum()
{
    int num,cube;
    printf("Enter a number:\n");
    scanf("%d",&num);

    cube=num*num*num;
    return cube;
    
}

int main()
{
    int result = cubeofnum();
    printf("Cube of Number:%d",result);
    return 0;
}
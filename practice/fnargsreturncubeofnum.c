#include<stdio.h>

int cubeofnum(int);

int cubeofnum(int num)
{
    int cube;
    
    cube=num*num*num;
    return cube;
    
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int result = cubeofnum(num);
    printf("Cube of Number:%d",result);
    return 0;
}
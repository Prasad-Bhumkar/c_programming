#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers a and b:");
    scanf("%d%d",&a,&b);
    (a>b)?printf("a is greater") : printf("b is greater");

    return 0;
}
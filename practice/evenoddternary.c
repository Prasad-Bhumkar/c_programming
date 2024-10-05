#include<stdio.h>
int main()
{
    int num,total;
    printf("Enter number:");
    scanf("%d",&num);
    (num % 2 == 0)?printf("number is even") : printf("number is odd");

    return 0;
}
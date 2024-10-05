#include<stdio.h>
int main()
{
    int num,rem,sum;
    printf("Enter a number:\n");
    scanf("%d",&num);

    for ( sum = 0; num > 0; num = num / 10)
    {
        rem = num % 10;
        sum = sum + rem;
    }
    printf("Sum is = %d",sum);
    return 0;
}
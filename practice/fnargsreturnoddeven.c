#include<stdio.h>

int oddeven(int);

int oddeven(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter a number :\n");
    scanf("%d",&num);

    int result = oddeven(num);
    printf("%d",result);
}
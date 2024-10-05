#include<stdio.h>

int multipleof5(int);

int multipleof5(int num)
{
    if (num % 5 == 0)
    {
        printf("Number is divisible by 5.");
    }
    else
    {
        printf("Number is not divisible by 5.");
    }
    
}

int main()
{
    int num;
    printf("Enter a Number :\n");
    scanf("%d",&num);

    multipleof5(num);
    return 0;
}
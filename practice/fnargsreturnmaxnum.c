#include<stdio.h>

int max(int,int);

int max(int num1, int num2)
{
    int maxnum;

    if (num1>num2)
    {
       maxnum=num1;
    }
    else
    {
        maxnum=num2;
    }
    return maxnum;
}

int main()
{
    int num1,num2;
    
    printf("Enter two numbers :\n");
    scanf("%d%d",&num1,&num2);

    int result = max(num1,num2);
    printf("%d",result);
}
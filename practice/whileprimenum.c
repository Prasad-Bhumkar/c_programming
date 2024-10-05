#include<stdio.h>
int main()
{
    int n,i=2,rem=0,flag=0;
    printf("Enter the number:\n");
    scanf("%d",&n);

    rem=n/2;

    while (i <= rem)
    {
        if (n%i==0)
        {
            flag=1;
            break;
            i++;
        }
    }
    
        if (flag == 0)
    {
        printf("Number is prime.");
    }
    else
    {
        printf("Number is not prime.");
    }
    
    return 0;
}
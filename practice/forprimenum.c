#include<stdio.h>
int main()
{
    int n,i,rem=0,flag=0;
    printf("Enter the number:\n");
    scanf("%d",&n);

    rem=n/2;
// for not prime change value of flag to 1
    for ( i = 2; i <= rem; i++)
    {
        if (n%i == 0)
        {
            flag=1;
            break;
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
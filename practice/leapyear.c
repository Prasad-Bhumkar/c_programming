#include<stdio.h>
int main()
{
    int year;

    printf("Enter year:");
    scanf("%d",&year);
    if (year % 4 == 0)
    {
        printf("You have entered leap year.");
    }
    else
    {
        printf("You have entered non-leap year.");
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character:\n");
    scanf("%c",&ch);

    if (ch>= 48 && ch<=57)
    {
        printf("it is a number.");
    }
    else
    {
        printf("It is not a number.");
    }
    
    return 0;

}
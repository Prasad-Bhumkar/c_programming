#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character:\n");
    scanf("%c",&ch);

    if ((ch>= 68 && ch<=90) || (ch>= 97 && ch<=122))
    {
        printf("it is a character.");
    }
    else
    {
        printf("It is not a character.");
    }
    return 0;
}
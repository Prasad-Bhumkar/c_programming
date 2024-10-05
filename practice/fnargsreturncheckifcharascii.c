#include<stdio.h>

int ifalphabet(char);

int ifalphabet(char ch)
{

    if ((ch>= 68 && ch<=90) || (ch>= 97 && ch<=122))
    {
        // printf("it is a character.");
        return 1;
    }
    else
    {
        // printf("It is not a character.");
        return 0;
    }
    
}

int main()
{
    char ch;
    printf("Enter your character:\n");
    scanf("%c",&ch);

    int result = ifalphabet(ch);
    printf("%d",result);
    return 0;
}
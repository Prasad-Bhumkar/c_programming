#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character:\n");
    scanf("%c",&ch);

    if (ch == 'a' || ch == 'A' || ch == 'e' ||  ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' ||  ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("It is a vowel.");
    }
    else
    {
        printf("It is a Consonent.");
    }
    return 0;
}
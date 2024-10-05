#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char rev[50]; 
    
    printf("Enter your string :\n");
    scanf("%s",str);

    for (int i = 0; i < 50; i++ )
    {
        rev[i] = str[i];
    }

    if (strcmp(str,strrev(rev)) == 0)
    {
        printf("your string is palindrome");
    }
    else
    {
        printf("your string is not palindrome");
    }

    return 0;    
}
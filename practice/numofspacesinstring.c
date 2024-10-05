#include<stdio.h>
int main()
{
    char str[50];
    int count = 0;

    printf("Enter your string :\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 32)
        {
            count++;
        }
    }
    printf("Number of spaces in your string :%d",count);

    return 0;
}

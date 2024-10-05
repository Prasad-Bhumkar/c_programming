#include<stdio.h>
int main()
{
    char str[50];
    int count = 0;

    printf("Enter your string :\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u'|| str[i] == 'U')
        {
            count++;
        }
        
    }
    printf("Number of vowels in your string :%d",count);

    return 0;
}

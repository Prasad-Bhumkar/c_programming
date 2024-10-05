#include<stdio.h>
#include<string.h>

int main()
{
    char name1[20];
    char name2[20];

    printf("Enter two names of customers :\n");
    scanf("%s%s",name1,name2);

    if (strlen(name1) > strlen(name2))
    {
        printf("Length of name %s is %d.",name1,strlen(name1));
    }
    else
    {
        printf("Length of name %s is %d.",name2,strlen(name2));
    }

    return 0;
}
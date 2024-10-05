#include<stdio.h>
int main()
{
    int lang;
    printf("1.MARATHI\n2.ENGLISH\n3.HINDI\n");
    printf("Enter your choice:\n");
    scanf("%d",&lang);
    
    switch (lang)
    {
    case 1:
        printf("You have selected Marathi.");
        break;
    case 2:
        printf("You have selected English.");
        break;
    case 3:
        printf("You have selected Hindi.");
        break;    
    default:
    printf("Invalid Choice!!!");
        break;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter selling price and cost:\n");
    scanf("%d%d",&sp,&cp);

    if (sp>0 && cp>0)
    {
        if (sp>cp)
        {
            printf("Profit is generated.");
        }
        else
        {
            printf("Loss is generated.");
        }
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
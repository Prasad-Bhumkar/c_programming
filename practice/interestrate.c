#include<stdio.h>
int main()
{

    int age;
    char gender;
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Enter your gender:\n");
    scanf(" %c",&gender);

    if (age >= 60)
    {
        if (gender == 'f')
        {
            printf("9.75%% interest rate.");
        }
        else
        {
            printf("9.50%% interest rate.");
        }
    }
    else
    {
        printf("8.00%% interest rate.");
    }
    return 0;
}
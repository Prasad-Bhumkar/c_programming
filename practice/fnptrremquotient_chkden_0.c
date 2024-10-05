#include<stdio.h>
float rem_quot(int,int , float *,float *);

float rem_quot(int n,int d, float *rem, float *quot)
{
    *rem = n%d;
    *quot = n/d;
}

int main()
{
    int n,d;
    float rem,quot;
    printf("Enter the numerator and denominator : \n");
    scanf("%d%d",&n,&d);
    
    if (d != 0)
    {
        float result = rem_quot(n,d,&rem,&quot);
        printf("Reminder : %f\n",rem);
        printf("Quotient : %f\n",quot);
    }
    else
    {
        printf("Division by zero is not allowed !!!\n");
        printf("Enter the numerator and denominator : \n");
        scanf("%d%d",&n,&d);
        float result = rem_quot(n,d,&rem,&quot);
        printf("Reminder : %f\n",rem);
        printf("Quotient : %f\n",quot);
    }

    return 0;
}
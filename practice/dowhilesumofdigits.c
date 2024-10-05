#include<stdio.h>
int main()
{
    int n,m,sum=0;
    printf("Enter a number :\n");
    scanf("%d",&n);
    do
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }while (n>0);
    printf("Sum is = %d",sum);
    return 0;
}
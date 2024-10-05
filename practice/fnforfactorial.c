#include<stdio.h>
void factorial();

void factorial()
{
    int i,f=1,n;
    printf("Enter a number to find factorial:\n");
    scanf("%d",&n);   
    for ( i = 1; i <= n; i++)
    {
        f = f * i ;
    }
    printf("Factorial of %d is %d.",n,f);
}
int main()
{
    factorial();
    return 0;
}
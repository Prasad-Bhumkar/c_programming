#include<stdio.h>
int factorial();

int factorial()
{
    int i,f=1,n;
    printf("Enter a number to find factorial:\n");
    scanf("%d",&n);   
    for ( i = 1; i <= n; i++)
    {
        f = f * i ;
    }
    return f;
}
int main()
{
    
    int result = factorial();
    printf("Factorial is %d.",result);
    return 0;
}
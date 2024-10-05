#include<stdio.h>
int factorial(int);

int factorial(int n)
{
    int i,f=1;
     
    for ( i = 1; i <= n; i++)
    {
        f = f * i ;
    }
    return f;
}
int main()
{
    int n;
    printf("Enter a number to find factorial:\n");
    scanf("%d",&n);  
    int result = factorial(n);
    printf("Factorial is %d.",result);
    return 0;
}
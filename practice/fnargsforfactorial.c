#include<stdio.h>
void factorial(int);

void factorial(int n)
{
    int i,f=1;
    
    for ( i = 1; i <= n; i++)
    {
        f = f * i ;
        
    }
    printf("Factorial of %d is %d.",n,f);
}
int main()
{
    int n;
    printf("Enter a number to find factorial:\n");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
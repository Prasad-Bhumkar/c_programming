#include<stdio.h>
int main()
{
    int i=1,n,f=1;
    printf("Enter a number to find factorial:\n");
    scanf("%d",&n);
    do
    {
        f = f * i ;
        i++;
    }while (i <= n);
    printf("Factorial of %d is %d.",n,f);
    return 0;
}
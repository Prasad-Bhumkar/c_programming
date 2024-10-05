#include<stdio.h>
void factorial();

void factorial()
{
    int i=1,n,f=1;
    printf("Enter a number to find factorial:\n");
    scanf("%d",&n);
    while (i <= n)
    {
        f = f * i ;
        i++;
    }
    printf("Factorial of %d is %d.",n,f);

}
int main()
{
    factorial();
    return 0;
}
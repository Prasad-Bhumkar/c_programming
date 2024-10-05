#include<stdio.h>
int main()
{
    int n,i = 1;
    printf("Enter number for multiplication table:\n");
    scanf("%d",&n);
    do
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }while ( i <= 10 );
    
    return 0;
}
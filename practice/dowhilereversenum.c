#include<stdio.h>
int main()
{
    int n,og_num,m,rev=0;
    printf("Enter a number :\n");
    scanf("%d",&og_num);
    n=og_num;
    do
    {
        m=n%10;
        rev=(rev*10)+m;
        n=n/10;
    }while (n>0);
    printf("Reverse of %d is = %d.",og_num,rev);
    return 0;
}
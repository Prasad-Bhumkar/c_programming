#include<stdio.h>
int main()
{
    int i,n,og_num,m,rev=0;
    printf("Enter a number :\n");
    scanf("%d",&og_num);
    n=og_num;

    for ( i = n; i > 0; i=i/10)
    {
        m=i%10;
        rev=(rev*10)+m;
    }
    printf("Reverse of %d is = %d.",og_num,rev);
    return 0;
}
#include<stdio.h>
int main()
{
    int num,num1,total=0;
    for (;num!=0;)
    {
        printf("Enter a Number if you want add otherwise enter 0:\n");
        scanf("%d",&num);
        for ( num1 = num; num1 > 0 || num1 < 0; )
            {
    
            total+=num;
            printf("Sum is :%d\n",total);
            break;
            }
    }    
    return 0;
}
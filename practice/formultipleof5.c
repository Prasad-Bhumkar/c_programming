#include<stdio.h>
int main()
{
    int num;

    for (;num!=0;)
    {
        printf("Enter a Number otherwise enter 0 to exit!!:\n");
        scanf("%d",&num);
         
        if (num % 5 == 0)
        {
            
            printf("Number is :%d\n",num);
            continue;
            
        }
    }    
    return 0;
}


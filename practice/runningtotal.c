#include<stdio.h>
static int total;

int sum(int n);

int sum(int n)
{
  
    total = total + n ; 
    return total;   
}

int main()
{
    int n;
    printf("\nEnter a number to add or enter 0 to exit:\n");
    scanf("%d",&n);

    while (n != 0)
    {
        int result =sum(n);
        printf("Total :%d",result);

        printf("\nEnter a number to add or enter 0 to exit:\n");
        scanf("%d",&n);
    }
    
    printf("Total = %d",total);

    return 0;
}
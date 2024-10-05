#include<stdio.h>
int main()
{
    int arr[10]={10,20,30,40,50};

    for (int i = 5; i < 10; i++)
    {
        printf("Enter element for %d position:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
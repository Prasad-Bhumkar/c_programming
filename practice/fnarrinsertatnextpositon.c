#include<stdio.h>

void insertvalue(int [],int);

void insertvalue(int arr [],int size)
{
    for (int i = 5; i < size; i++)
    {
        printf("Enter element for %d position:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int arr[10]={10,20,30,40,50};
    int size = 10;
    insertvalue(arr,size);

    return 0;
    
}
#include<stdio.h>
int search(int [],int,int);

int search(int array[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int arr[5]={80,99,52,20,105},ele,result;

    printf("Array is :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Enter element to search :\n");
    scanf("%d",&ele);

    result = search(arr,5,ele);

    if (result == -1)
    {
        printf("Element is not found !!!");
    }
    else
    {
        printf("Element found at position %d.",result);
    }
    return 0;
}
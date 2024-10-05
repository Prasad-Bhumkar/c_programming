#include<stdio.h>

void bubblesort(int [],int);

void bubblesort(int arr[],int size)
{
    int temp,n=5;
    for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                if (arr[i]>arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    

    printf("Before sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }

    bubblesort(arr,5);
    
    printf("\nAfter sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

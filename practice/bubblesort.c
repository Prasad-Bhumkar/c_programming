#include<stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int i,n=5;
    int temp;

    printf("Before sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }

    for (int i = 0; i < 5; i++)
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
    
    printf("\nAfter sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

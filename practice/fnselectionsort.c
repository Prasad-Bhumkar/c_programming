#include<stdio.h>

void selectionsort(int [],int);

void selectionsort(int arr[],int n)
{
    int minindx;
    int temp,i,j;
    for ( i = 0; i < n-1; i++)
    {
        minindx=i;
        for ( j = i; j < n; j++)
        {
            if (arr[j]<arr[minindx])
            {
                minindx=j;
            }
        }

        if (minindx != i)
        {
        temp = arr[i];
        arr[i] = arr[minindx];
        arr[minindx] = temp;
        }
          
    }

}

int main()
{
    int arr[5]={5,4,3,2,1};
    

    printf("Before sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }

    selectionsort(arr,5);
    
    printf("\nAfter sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

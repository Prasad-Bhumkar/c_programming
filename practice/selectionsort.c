#include<stdio.h>

int main()
{
    int arr[5]={5,4,3,2,1};
    int minindx,n=5;
    int temp,i,j;

    printf("Before sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }

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
    
    printf("\nAfter sorting:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

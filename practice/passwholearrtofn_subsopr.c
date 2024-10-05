#include<stdio.h>

// taking one argument [] for taking whole array and second argument for count of elements

void f1(int [], int); 
void f1(int e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",e[i]);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n=5;

        f1(arr, 5);
    
    return 0;
}
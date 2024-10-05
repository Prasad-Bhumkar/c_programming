#include<stdio.h>

void f1(int *, int); // [] is overridden by (*) derefrencing operator

void f1(int *e, int n) // [] is overridden by (*) derefrencing operator
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", (*e+i)) ;  //base address + value of i (0,1,2,3,4)
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n=5;

        f1(arr, 5); //remains same
    
    return 0;
}
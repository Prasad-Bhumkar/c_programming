#include<stdio.h>

void f1(int);

void f1(int e)
{
    printf("%d\t",e);
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        f1(arr[i]);
    }
    return 0;
}
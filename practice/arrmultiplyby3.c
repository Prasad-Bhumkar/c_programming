#include<stdio.h>
int main()
{
    int i,a[5];

    printf("Enter 5 elements for array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    //multiplying by 3

    for ( i = 0; i < 5; i++)
    {
        a[i] = a[i] * 3;
    }
    
    printf("Resulting array:\n");

    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}

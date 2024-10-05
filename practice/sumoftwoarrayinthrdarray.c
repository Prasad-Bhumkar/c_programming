#include<stdio.h>
int main()
{
    int i,a[5],b[5],c[5];

    printf("Enter elements for first array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements for second array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

//calculating sum of elements of matching index
    for ( i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }
    
    printf("Resulting array:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t",c[i]);
    }
    
    return 0;
}




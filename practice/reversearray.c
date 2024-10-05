#include<stdio.h>
int main()
{
    int i,a[5];

    printf("Enter elements for array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Resulting array:\n");
    for ( i = 4; i >= 0; i--)
    {
       
        printf("%d\t",a[i]);
    }
    
    return 0;
}




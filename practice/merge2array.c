#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5}, b[5] = {6, 7, 8, 9, 10}, c[10];
//printing arrays before merging   
    printf("First array is:\n");
    for (int i = 0; i < 5; i++)
        printf("%d\t", a[i]);
    printf("\n");

    printf("Second array is:\n");
    for (int i = 0; i < 5; i++)
        printf("%d\t", b[i]);
    printf("\n");

//copying both arrays to third array
    for (int i = 0; i < 5; i++)
        c[i] = a[i];

    for (int i = 0; i < 5; i++)
        c[i + 5] = b[i];

//print merged array
    printf("Merged array is:\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", c[i]);
    printf("\n");

    return 0;
}


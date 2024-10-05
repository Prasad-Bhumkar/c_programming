#include<stdlib.h>
#include<stdio.h>

int main()
{
    //creating pointer to hold base address of the block
    int *ptr;
    int n;

    printf("How many integers are there ??");
    scanf("%d",&n);

    //allocating memory using calloc
    ptr = (int *) calloc(n , sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory is not allocated !!!!");

        exit(0);
    }
    else
    {
        printf("Memory has been successfully allocated !!!!\n\n");

        printf("Enter your elements :\n");

        for (int i = 0; i < n; i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("\n");

        printf("Your elements are :\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d\t",ptr[i]);
        }

    }
    return 0;
}
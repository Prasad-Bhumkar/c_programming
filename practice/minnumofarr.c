#include <stdio.h>

int main()
{
    int num[5],i,minnum;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    minnum = num[0];
    for (i = 0; i < 5; i++)
    {
        if (minnum > num[i])
        {
            minnum = num[i];
        }  
    }
    printf("Minimum number in array:\n");
    printf("%d",minnum);

    return 0;
}

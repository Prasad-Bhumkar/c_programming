#include <stdio.h>

int main()
{
    int num[5],i,maxnum = 0;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Maximum number in array:\n");

    for (i = 0; i < 5; i++)
    {
        if (num[i] > maxnum)
        {
            maxnum = num[i];
        }  
    }
    printf("%d",maxnum);

    return 0;
}

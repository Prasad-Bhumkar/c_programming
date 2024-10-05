#include <stdio.h>

int findmaximum(int [],int);

int findmaximum(int num[],int size)
{
    int maxnum = 0;
     for (int i = 0; i < 5; i++)
    {
        if (num[i] > maxnum)
        {
            maxnum = num[i];
        }  
    }
    return maxnum;
    
}

int main()
{
    int num[5],i,maxnum;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    maxnum = findmaximum(num, 5);

    printf("Maximum number in array is %d.",maxnum);

    return 0;
}

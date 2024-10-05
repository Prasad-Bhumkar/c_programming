#include <stdio.h>

int main()
{
    int num[10],i,sum;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    
    printf("Sum of odd numbers in array:\n");

    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {
            sum = sum + num[i];
        }
    }
    printf("%d",sum);

    return 0;
}

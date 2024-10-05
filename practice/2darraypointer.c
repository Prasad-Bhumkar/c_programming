//basic program for acceptinng and displaying 2d array using pointer

#include<stdio.h>

int main()
{
    int fdamt[2][2];

    printf("Enter your elements row by row :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",( *(fdamt + i) + j));
        }
        
    }

    printf("Your 2d array is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", *(*(fdamt + i) + j));
        }
        printf("\n");
    }
    
    return 0;
}
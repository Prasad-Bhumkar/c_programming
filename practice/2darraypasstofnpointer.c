// passing 2d array to a function using pointer

#include<stdio.h>
void dispamt(int (*p)[2],int);

void dispamt(int (*p)[2],int num)
{
    printf("Enter your elements row by row :\n");
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",(*(p + i)+j));
        }
    }


    printf("Your 2d array is :\n");
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", *(*(p + i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int fdamt[2][2];
    int num=2;

    dispamt(fdamt,num);
    return 0;
}
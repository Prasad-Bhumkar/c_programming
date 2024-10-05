// passing 2d array to a function

#include<stdio.h>
void dispnames(char [5][20],int);

void dispnames(char custnames[5][20],int num)
{
    printf("Enter your elements row by row :\n");
    for (int i = 0; i < num; i++)
    {
            gets(custnames[i]);   
    }


    printf("Your 2d array is :\n");
    for (int i = 0; i < num; i++)
    {
            puts(custnames[i]);
    }
}

int main()
{
    char custnames[5][20];
    int num=5;

    dispnames(custnames,num);
    return 0;
}
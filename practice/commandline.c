#include<stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("\nArgument number %d is : %s",i+1,argv[i]);
    }
    return 0;
}
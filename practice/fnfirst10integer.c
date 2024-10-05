#include<stdio.h>

void printnumbers();

void printnumbers()
{
    int i;

    for ( i = 1; i <= 10; i++)
    {
        printf("%d\n",i);
    }
    
}

int main()
{
    printnumbers();
    return 0;
}
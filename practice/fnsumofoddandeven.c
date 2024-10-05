#include<stdio.h>

void sumofoddeven(int *,int *);

void sumofoddeven(int *evensum,int *oddsum)
{
    for ( int n = 1; n <= 10; n++)
    {
        if (n % 2 == 0)
        {
            *evensum += n;
        }
        else
        {
            *oddsum += n;
        }
    }
}

int main()
{
    int evensum  = 0, oddsum = 0;

    sumofoddeven(&evensum,&oddsum);

    printf("Sum of even numbers :%d\n",evensum);
    printf("Sum of odd numbers :%d\n",oddsum); 
  return 0;  
}
#include<stdio.h>
int main()
{
    int i;
    float a[7],sum=0,avg;
    printf("Enter rainfall of 7 days in mm:\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%f", &a[i]);
    }

    //calculating sum

    for ( i = 0; i < 7; i++)
    {
        sum = sum + a[i];
    }
    
    //calculating average
    avg = sum/7;

    printf("\nAverage rainfall of the week is : %f",avg);
    return 0;
}

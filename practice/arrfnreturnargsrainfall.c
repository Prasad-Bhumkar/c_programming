#include<stdio.h>
float average(float [],int);
float average(float rain[],int size)
{
    float sum = 0, avg;

        //calculating sum

    for (int i = 0; i < 7; i++)
    {
        sum = sum + rain[i];
    }
    
    //calculating average
    avg = sum/7;

    return avg;
}

int main()
{
    int i;
    float rainfall[7],avg;
    printf("Enter rainfall of 7 days in mm:\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%f", &rainfall[i]);
    }
    avg = average(rainfall,7);
    printf("\nAverage rainfall of the week is : %f",avg);
    return 0;
}

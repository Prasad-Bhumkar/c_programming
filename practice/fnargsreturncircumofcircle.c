#include<stdio.h>

float circumferenceofcircle(int);

float circumferenceofcircle(int r)
{
    
    float pi=3.14,circum;
    
    circum=2*pi*r;
    return circum;
}

int main()
{
    int r;
    printf("Enter radius:\n");
    scanf("%d",&r);
    float result = circumferenceofcircle(r);
    printf("Circumference of circle:%f",result);
    return 0;
}
#include<stdio.h>

float circumferenceofcircle();

float circumferenceofcircle()
{
    int r;
    float pi=3.14,circum;
    
    printf("Enter radius:\n");
    scanf("%d",&r);
    
    circum=2*pi*r;
    return circum;
}

int main()
{
    float result = circumferenceofcircle();
    printf("Circumference of circle:%f",result);
    return 0;
}
#include<stdio.h>

void circumferenceofcircle();

void circumferenceofcircle()
{
    int r;
    float pi=3.14,circum;
    
    printf("Enter radius:\n");
    scanf("%d",&r);
    
    circum=2*pi*r;
    printf("Circumference of circle:%f",circum);
}

int main()
{
    circumferenceofcircle();
    return 0;
}
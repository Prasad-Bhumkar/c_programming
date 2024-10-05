#include<stdio.h>
void circumferenceofcircle(int);

void circumferenceofcircle(int r)
{
   
    float pi=3.14,circum;
    
    circum=2*pi*r;
    printf("Circumference of circle:%f",circum);

}

int main()
{
    int r;
    printf("Enter radius:\n");
    scanf("%d",&r);

    circumferenceofcircle(r);
    return 0;
}
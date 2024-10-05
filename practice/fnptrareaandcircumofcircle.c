#include<stdio.h>
float area_circumofcircle(int, float *,float *);

float area_circumofcircle(int r, float *area, float *circum)
{
    float pi=3.14;
    
    *area=pi*r*r;
    
    *circum = 2*pi*r;
}

int main()
{
    int r;
    float area,circum;
    printf("Enter the radius : \n");
    scanf("%d",&r);

    float area_circum = area_circumofcircle(r,&area,&circum);
    
    printf("Area of circle:%f\n",area);
    printf("Circumference of circle:%f\n",circum);
    return 0;
}
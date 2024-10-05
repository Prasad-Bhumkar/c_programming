#include<stdio.h>
float area();
float area()
{
    float pi=3.14,area;
    int r;
    printf("Enter radius:\n");
    scanf("%d",&r);
    
    area=pi*r*r;
    
    return area;
}
int main()
{
    float result = area();
    printf("Area of circle:%f",result);
    return 0;
}
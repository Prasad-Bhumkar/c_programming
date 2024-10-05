#include<stdio.h>
float area(int);
float area(int r)
{
    float pi=3.14,area;
    
    area=pi*r*r;
    
    return area;
}
int main()
{
    int r;
    printf("Enter radius:\n");
    scanf("%d",&r);
    float result = area(r);
    printf("Area of circle:%f",result);
    return 0;
}
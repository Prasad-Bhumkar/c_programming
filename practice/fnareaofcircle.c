#include<stdio.h>
void area();
void area()
{
    float pi=3.14,area;
    int r;
    printf("Enter radius:\n");
    scanf("%d",&r);
    
    area=pi*r*r;
    printf("Area of circle:%f",area);
    
}
int main()
{
    area();
    return 0;
}
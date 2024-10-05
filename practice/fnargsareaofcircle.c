#include<stdio.h>
void area(int);
void area(int r)
{
    float pi=3.14,area;
    
    area=pi*r*r;
    printf("Area of circle:%f",area);
    
}
int main()
{
    int r; 
    printf("Enter radius:\n");
    scanf("%d",&r);
    area(r);
    return 0;
}
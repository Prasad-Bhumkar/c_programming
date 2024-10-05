#include<stdio.h>
void areaofreactangle();

void areaofreactangle()
{
    int l,b,area;
    printf("Enter length and breadth of rectangle:\n");
    scanf("%d %d",&l,&b);
    area = l*b;
    printf("Area of rectangle is:%d",area);
}

int main()
{
    areaofreactangle();
    return 0;
}
#include<stdio.h>
int areaofreactangle();

int areaofreactangle()
{
    int l,b,area;
    printf("Enter length and breadth of rectangle:\n");
    scanf("%d %d",&l,&b);
    area = l*b;
    return area;
}

int main()
{
    int result = areaofreactangle();
    printf("Area of rectangle is:%d",result);
    return 0;
}
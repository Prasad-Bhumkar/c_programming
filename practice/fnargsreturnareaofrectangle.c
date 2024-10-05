#include<stdio.h>
int areaofreactangle(int,int);

int areaofreactangle(int l,int b)
{
    int area;
    area = l*b;
    return area;
}

int main()
{
    int l,b;
    printf("Enter length and breadth of rectangle:\n");
    scanf("%d %d",&l,&b);
    int result = areaofreactangle(l,b);
    printf("Area of rectangle is:%d",result);
    return 0;
}
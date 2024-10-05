#include<stdio.h>
void areaofreactangle(int,int);

void areaofreactangle(int l,int b)
{
    int area;
    
    area = l*b;
    printf("Area of rectangle is:%d",area);
}

int main()
{
    int l,b;
    printf("Enter length and breadth of rectangle:\n");
    scanf("%d %d",&l,&b);

    areaofreactangle(l,b);
    return 0;
}
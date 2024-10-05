#include<stdio.h>

int swap(int ,int);

int swap(int a,int b)
{
int temp;
temp = a;
a = b;
b = temp;
printf("Values after swapping :\n a = %d and b = %d.\n",a,b);
}
int main()
{
int a,b;
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);

printf("Values before swapping :\n a = %d and b = %d.\n",a,b);

swap(a,b);

}
#include<stdio.h>

int armstrong(int);
int armstrong(int num)
{
    int original_num, r, sum=0;

    original_num = num;
while (num!=0)
{
    r=num%10; 
    sum=sum+(r*r*r);
    num=num/10;
}
if (sum == original_num)
printf("%d is an Armstrong number.\n", original_num);
else
printf("%d is not an Armstrong number.\n", original_num);
    
}
int main()
{
    int num;

    printf("Input any number: "); 
    scanf("%d", &num);

    armstrong(num);
    return 0;
}
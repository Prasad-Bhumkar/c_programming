#include <stdio.h>
int main() 
{
int num,original_num, r, sum=0;
printf("Input any number: "); 
scanf("%d", &original_num);
num = original_num;
do
{
    r=num%10; 
    sum=sum+(r*r*r);
    num=num/10;
}while (num!=0);
if (sum == original_num)
printf("%d is an Armstrong number.\n", original_num);
else
printf("%d is not an Armstrong number.\n", original_num); 
return 0;
}
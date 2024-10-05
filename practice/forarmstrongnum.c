#include <stdio.h>
int main() 
{
int num, r, sum=0;
printf("Input any number: "); 
scanf("%d", &num);

for (int i=num;i!=0;i=i/10)
{ 
    r=i% 10; 
    sum=sum+ (r*r*r);
}

if (sum == num)
printf("%d is an Armstrong number.\n", num);
else
printf("%d is not an Armstrong number.\n", num); 

return 0;
}
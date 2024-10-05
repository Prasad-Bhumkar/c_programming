#include <stdio.h>

int main()
{
    int n, i = 2, flag = 0;
    
    printf("Enter the number:\n");
    scanf("%d", &n);

    if (n <= 1) 
    {
        printf("Number is not prime.\n");
        return 0;
    }

    do 
    {
        if (n % i == 0) 
        {
            flag = 1;
            break; // Exit the loop if a factor is found
        }
        i++;
    } while (i <= n / 2);

    if (flag == 0) {
        printf("Number is prime.\n");
    } else {
        printf("Number is not prime.\n");
    }
    
    return 0;
}

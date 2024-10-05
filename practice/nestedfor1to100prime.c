#include <stdio.h>
int main()
{
    int i, num, flag;
    
    for (num = 1; num <= 100; num++)
    {
        flag = 0;
        int rem = num / 2;
        for (i = 2; i <= rem; i++)
        {
            if (num % i == 0)
            {
                flag++;
                break;
            }
        }
        
        if (flag == 0 && num != 1)
        {
            printf("%d \n", num);
        }
    }
    return 0;
}
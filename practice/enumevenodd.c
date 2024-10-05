#include<stdio.h>

enum truefalse {False,True};

int oddeven(int);

int oddeven(int n)
{
    if (n % 2 == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
    
    
}
int main()
{
    int num;

    printf("Enter a number to check if it is even:\n");
    scanf("%d",&num);

    int result = oddeven(num);

    switch (result)
    {
    case 0:
        printf("You have entered odd number!!!");
        break;
    case 1:
        printf("You have entered even number!!!");
        break;
    }
}
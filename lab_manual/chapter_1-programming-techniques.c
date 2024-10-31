//LAB 1

//getting familier with coding environment 

//demonstration of simple program

#include <stdio.h>
int main ()
{
    printf("hello");
}



//LAB 2
//[1] Find the area of a circle whose radius is accepted from the user

int main()
{
    int r;
    float pi = 3.14159, area;
    printf("Enter the radius: ");
    scanf("%d", &r);
    if (r < 0) {
        printf("Error: Radius cannot be negative.");
        return 1;
    }
    area = pi * (float)r * (float)r;
    printf("Area of circle is %.2f", area);
    return 0;
}

//[2] find the maximum of two  numbers
int main()
{
    int a,b,max;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    if (a>b)
    max = a;
    else
    max = b;
    printf("Maximum of two numbers is %d",max);
    return 0;
}

//[3] find if number entered by user is odd or even
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    
    if (n%2==0)
    printf("Number is even");
    else
    printf("Number is odd");
    return 0;
    
    }

//[4] Find weather the number accepted from the user is positive or negative
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n>0)
    printf("Number is positive");
    else if (n<0)
    printf("Number is negative");
    else
    printf("Number is zero");
    return 0;
}

//[5] Accept the age from user and display appropriate message for issuing the licence
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age>=18)
    printf("You are eligible for licence");
    else
    printf("You are not eligible for licence");
    return 0;
}

//[6] Print multiples of five that are less than 100
int main()
{
    int i;
    for (i=5; i<100; i+=5)
    printf("%d ",i);
    return 0;
}

//[7] Find the sum of even numbers from one to 20
int main()
{
    int i,sum=0;
    for (i=2; i<=20; i+=2)
    sum=sum+i;
    printf("Sum of even numbers is %d",sum);
    return  0;
}
//[8] Find the factorial of a number Entered by user
int main()
{
    int n,i,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    
    for (i=1; i<=n; i++)
    fact=fact*i;
    printf("Factorial of %d is %d",n,fact);
    
    return 0;
    
}

//[9] To find whether the number accepted from the user is a prime number or not.
int main()
{
    int n,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=2; i<n; i++)
    if (n%i==0)
    flag=1;
    if (flag==0)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);
    return 0;
}

//[10] Consider the number is 3425 . Find the sum of the digits of the number and display the sum
int main()
{
    int num = 3425, sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of the digits is %d", sum);
    return 0;
}

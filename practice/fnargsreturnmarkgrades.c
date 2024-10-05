#include <stdio.h>

char markgrades(int , int );

char markgrades(int rollnum, int marks)
{
    char grade;
    if (marks >= 80 && marks <= 90)
    {
        grade = 'A';
    }
    else if (marks >= 70 && marks < 80)
    {
        grade = 'B';
    }
    else if (marks >= 60 && marks < 70)
    {
        grade = 'C';
    }
    else if (marks >= 50 && marks < 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    return grade;
}

int main()
{
    int rollnum, marks;
    printf("Enter roll number and marks:\n");
    scanf("%d%d", &rollnum, &marks);

    char result = markgrades(rollnum, marks);

    printf("Resulting grade of Roll Number %d is %c.\n", rollnum, result);

    return 0;
}

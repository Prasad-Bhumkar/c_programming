#include<stdio.h>

int n;

//function for matrix addition
void add(int m1[3][n],int m2[3][n],int result[3][n],int n);

void add(int m1[3][n],int m2[3][n],int result[3][n],int n)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

//function for displaying resulting matrix
void display(int result[3][n],int n);

void display(int result[3][n],int n)
{
    printf("Resultant matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    
    printf("Enter number of columns :\n");
    scanf("%d",&n);
    int m1[3][n],m2[3][n],result[3][n];

    //accept matrix 1
    printf("Enter elements for first 3*%d matrix :\n",n);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }

    //accept matrix 2
    printf("Enter elements for second 3*%d matrix :\n",n);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    
    add(m1,m2,result,n);
    display(result,n);

    return 0;
}
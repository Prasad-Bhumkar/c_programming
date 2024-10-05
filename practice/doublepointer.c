// dynamic memory for integer

// #include<stdio.h>
// #include<stdlib.h>

// int row,col;

// void accept(int **,int,int);
// void display(int **,int,int);

// void accept(int **mat,int row,int col)
// {
//     printf("Enter the elements for %d*%d matrix:\n\n",row,col);
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             scanf("%d",&mat[i][j]);
//         }
//     }
// }

// void display(int **mat,int row,int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%d\t",mat[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int **mat;
//     printf("Enter number of rows and columns :\n");
//     scanf("%d%d",&row,&col);

//     mat = (int **)malloc(col*sizeof(int*));

//     for (int i = 0; i < row; i++)
//     {
//         mat[i] = (int *)malloc(row*sizeof(int *));
//     }
    
//     printf("\n\nEnter %d elements for matrix:\n",row*col);

//     accept(mat,row,col);

//     printf("\n\nElements of the matrix are :\n\n");

//     display(mat,row,col);

//     return 0;
// }




// dynamic memory for string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int row,col;
char **mat,temp[25];

void display(char **,int);

void display(char **mat,int row)
{
    for (int i = 0; i < row; i++)
    {
            printf("%s\n",mat[i]);
    }
}

int main()
{
    
    printf("Enter number of (rows) strings :\n");
    scanf("%d",&row);

    printf("\n\nEnter %d strings for matrix:\n",row);

    mat = (char **)malloc(row*sizeof(char*));

    for (int i = 0; i < row; i++)
    {
        printf("Enter string %d:\n",i+1);
        fflush(stdin);
        gets(temp);
        //scanf("%d",temp);
        
        mat[i] = (char *)malloc((strlen(temp) + 1));
        strcpy(mat[i],temp);
    }

    printf("\n\nElements of the matrix are :\n\n");

    display(mat,row);

    return 0;
}


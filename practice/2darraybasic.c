// basic syntax --> int fdamount[10][2];  
//here [10] stands for no of rows and [2] for no of columns

//declaration and initialization
//1] int fdamt[2][2] = {101,5000,102,7000};
//2] int fdamt[2][2] = {{101,5000},{102,7000}};
//3] int fdamt[][2] = {{101,5000}.{102.7000}}; we can skip row count but not column count

//basic program for accepting and displaying an 2d array from user

// #include<stdio.h>

// int main()
// {
//     int fdamt[2][2];

//     printf("Enter your elements row by row :\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d",&fdamt[i][j]);
//         }
        
//     }

//     printf("Your 2d array is :\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d\t", fdamt[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
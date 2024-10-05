#include<stdio.h>
#include<stdlib.h>

#define row 3

int main()
{
    int *pmark[row];
    int col;

    printf("How many records ??\n");
    scanf("%d",&col);

    //allocating memory for each row
    for (int i = 0; i < row; i++)
    {
        pmark[i] = (int *)malloc(sizeof(int)*col);
        
        if (pmark[i] ==NULL)
        {
            printf("Memory allocation failed!!! Exiting.......\n");

            return 1; //to indicate meory allocation failure
        }
        
    }


    //accept elements in 2d array   
    printf("Enter %d elements :\n",row*col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&pmark[i][j]);
        }
        
    }
    
    //Displaying elements
    printf("Your elements are :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t",pmark[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < row; i++)
    {
        free(pmark[i]);
    }
    
    return 0;
}
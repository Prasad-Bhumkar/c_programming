
//using if else ladder


// #include<stdio.h>

//     float july_avg,aug_avg,sep_avg,oct_avg;
//     float july_sum=0,aug_sum=0,sep_sum=0,oct_sum=0;
// void rain(int);

// void rain(int yr)
// {
//     float rain[yr][4];
//     //accepting rainfall values
//     for (int i = 0; i < yr; i++)
//     {
//         printf("Enter values for year %d:\n",i+1);
//         for (int j = 0; j < 4; j++)
//         {
//             if (j == 0) 
//             {
//                 printf("Enter rainfall value for July: ");
//                 scanf("%f", &rain[i][j]);
//             } 
//             else if (j == 1) 
//             {
//                 printf("Enter rainfall value for August: ");
//                 scanf("%f", &rain[i][j]);
//             } 
//             else if (j == 2) 
//             {
//                 printf("Enter rainfall value for September: ");
//                 scanf("%f", &rain[i][j]);
//             } 
//             else if (j == 3) 
//             {
//                 printf("Enter rainfall value for October: ");
//                 scanf("%f", &rain[i][j]);
//             }
//         }
//         printf("\n");
        
//     }
//     //calculate monthwise average rainfall
//     for (int i = 0; i < yr; i++)
//     {
//         july_sum = july_sum + rain[i][0];
//         aug_sum = aug_sum + rain[i][1];
//         sep_sum = sep_sum + rain[i][2];
//         oct_sum = oct_sum + rain[i][3];

//     }
    
//     july_avg = july_sum/4;
//     aug_avg = aug_sum/4;
//     sep_avg = sep_sum/4;
//     oct_avg = oct_sum/4;
//     //displaying monthwise average rainfall 

//     printf("Monthwise average rainfall for %d years:\n\n",yr);
//     printf("Average rainfall for july :%.2f\n",july_avg);
//     printf("Average rainfall for august :%.2f\n",aug_avg);
//     printf("Average rainfall for september :%.2f\n",sep_avg);
//     printf("Average rainfall for october :%.2f\n",oct_avg);
// }
// int main()
// {
//     int yr;
//     printf("Enter Number of years :\n");
//     scanf("%d",&yr);
//     printf("\n");

//     rain(yr);

//     return 0;
// }







//using switch case


#include<stdio.h>

    float july_avg,aug_avg,sep_avg,oct_avg;
    float july_sum=0,aug_sum=0,sep_sum=0,oct_sum=0;
void rain(int);

void rain(int yr)
{
    float rain[yr][4];
    //accepting rainfall values
    for (int i = 0; i < yr; i++)
    {
        printf("Enter values for year %d:\n",i+1);
        for (int j = 0; j < 4; j++)
        {
            switch (j) 
            {
                case 0:
                    printf("Enter rainfall value for July: ");
                    scanf("%f", &rain[i][j]);
                    break;
                case 1:
                    printf("Enter rainfall value for August: ");
                    scanf("%f", &rain[i][j]);
                    break;
                case 2:
                    printf("Enter rainfall value for September: ");
                    scanf("%f", &rain[i][j]);
                    break;
                case 3:
                    printf("Enter rainfall value for October: ");
                    scanf("%f", &rain[i][j]);
                    break;
                default:
                    break;
            }

        }
        printf("\n");
        
    }
    //calculate monthwise average rainfall
    for (int i = 0; i < yr; i++)
    {
        july_sum = july_sum + rain[i][0];
        aug_sum = aug_sum + rain[i][1];
        sep_sum = sep_sum + rain[i][2];
        oct_sum = oct_sum + rain[i][3];

    }
    
    july_avg = july_sum/4;
    aug_avg = aug_sum/4;
    sep_avg = sep_sum/4;
    oct_avg = oct_sum/4;
    //displaying monthwise average rainfall 

    printf("Monthwise average rainfall for %d years:\n\n",yr);
    printf("Average rainfall for july :%.2f\n",july_avg);
    printf("Average rainfall for august :%.2f\n",aug_avg);
    printf("Average rainfall for september :%.2f\n",sep_avg);
    printf("Average rainfall for october :%.2f\n",oct_avg);
}
int main()
{
    int yr;
    printf("Enter Number of years :\n");
    scanf("%d",&yr);
    printf("\n");

    rain(yr);

    return 0;
}



//chatgpt


// #include <stdio.h>

// float july_avg, aug_avg, sep_avg, oct_avg;
// float july_sum = 0, aug_sum = 0, sep_sum = 0, oct_sum = 0;

// void rain(int yr) {
//     float rain[yr][4];  // 4 months

//     // Accepting rainfall values
//     for (int i = 0; i < yr; i++) {
//         printf("Enter rainfall values for year %d:\n", i + 1);
//         for (int j = 0; j < 4; j++) {
//             switch (j) {
//                 case 0:
//                     printf("Enter rainfall value for July: ");
//                     scanf("%f", &rain[i][j]);
//                     break;
//                 case 1:
//                     printf("Enter rainfall value for August: ");
//                     scanf("%f", &rain[i][j]);
//                     break;
//                 case 2:
//                     printf("Enter rainfall value for September: ");
//                     scanf("%f", &rain[i][j]);
//                     break;
//                 case 3:
//                     printf("Enter rainfall value for October: ");
//                     scanf("%f", &rain[i][j]);
//                     break;
//                 default:
//                     break;
//             }
//         }
//     }

//     // Calculate month-wise totals
//     for (int i = 0; i < yr; i++) {
//         july_sum += rain[i][0];
//         aug_sum += rain[i][1];
//         sep_sum += rain[i][2];
//         oct_sum += rain[i][3];
//     }

//     // Calculate month-wise average rainfall
//     july_avg = july_sum / 4;
//     aug_avg = aug_sum / 4;
//     sep_avg = sep_sum / 4;
//     oct_avg = oct_sum / 4;

//     // Displaying month-wise average rainfall 
//     printf("Month-wise average rainfall for %d years:\n", yr);
//     printf("Average rainfall for July: %.2f\n", july_avg);
//     printf("Average rainfall for August: %.2f\n", aug_avg);
//     printf("Average rainfall for September: %.2f\n", sep_avg);
//     printf("Average rainfall for October: %.2f\n", oct_avg);
// }

// int main() {
//     int yr;
//     printf("Enter number of years:\n");
//     scanf("%d", &yr);

//     rain(yr);

//     return 0;
// }

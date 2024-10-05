//strcpy in main fn

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char str1[10] = "hello", str2[10] = "world";
//     printf("Before copy :\nstring 1 = %s\tstring 2 = %s\n",str1,str2);

//     strcpy(str2,str1);

//     printf("After copying string1 to string2 :\nstring 1 = %s\tstring 2 = %s",str1,str2);

//     return 0;
// }



//creating function with parameters for copying string

// #include<stdio.h>
// #include<string.h>

// void copy(char[], char[]);

// void copy(char str1[],char str2[])
// {
//     strcpy(str2,str1);
// }
// int main()
// {
//     char str1[10] = "hello", str2[10] = "world";
//     printf("Before copy :\nstring 1 = %s\tstring 2 = %s\n",str1,str2);

//     copy(str1,str2);

//     printf("After copying string1 to string2 :\nstring 1 = %s\tstring 2 = %s",str1,str2);

//     return 0;
// }



//copying string without using strcpy by for loop

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char str1[10] = "welcome";
//     char str2[10];

//     for (int i = 0; i < 10; i++)
//     {
//         str2[i] = str1[i];
//     }
    
//     printf("Copied string 1:%s \n to string 2:%s",str1,str2);

//     return 0;
// }




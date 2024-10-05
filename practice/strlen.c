#include<stdio.h>
#include<string.h>

//storing length of string in third variable

// int main()
// {
//     char name[10];
//     int length;

//     printf("Enter your string:\n");
//     scanf("%s",name);

//     length = strlen(name);

//     printf("Length of your string is %d",length);
// }





//directly using strlen in printf stmt

// int main()
// {
//     char name[10];
    
//     printf("Enter your string:\n");
//     scanf("%s",name);

//     printf("Length of your string is %d",strlen(name));

//      return 0;
// }





//storing length of string in third variable --> using function with return

// void length(char []);

// void length(char name[])
// {
//     int length;

//     length = strlen(name);
    
//     printf("Length of your string is %d",length);
// }
// int main()
// {
//     char name[10];
    
//     printf("Enter your string:\n");
//     scanf("%s",name);

//     length(name);

//     return 0;
// }






// //storing length of string in third variable --> using function with return
// int length(char []);

// int length(char name[])
// {
//     int length;

//     length = strlen(name);
//     return length;

//     // printf("Length of your string is %d",length);
// }
// int main()
// {
//     char name[10];
    
    
//     printf("Enter your string:\n");
//     scanf("%s",name);

//     int res = length(name);

//     printf("Length of your string is %d",res);
//     return 0;
// }





//directly using strlen in printf stmt --> using  function 

// void length(char []);

// void length(char name[])
// {
//         printf("Length of your string is %d",strlen(name));
// }
// int main()
// {
//     char name[10];
    
//     printf("Enter your string:\n");
//     scanf("%s",name);

//     length(name);
// }




// // Calculating string length without using strlen

// int main()
// {
//     char name[10];
//     int length;

//     printf("Enter your string:\n");
//     scanf("%s",name);

//     for (int i = 0; i < 10; i++)
//     {
        
//         length = length + i;
//     }
    

//     printf("Length of your string is %d",length);
// }





//  comparing two strings based on their length

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[10] = "hello";
//     char str2[10] = "aaaaa";
    
//     // Compare lengths of the two strings
//     if (strlen(str1) != strlen(str2))
//     {
//         printf("string 1 and string 2 are not the same.");
//     }
//     else
//     {
//         printf("string 1 and string 2 are the same.");
//     }
    
//     return 0;
// }





// comparing length of two strings to check which one is greater or both are same

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[10] = "hello";
//     char str2[10] = "aaaa";
    
//     // Compare lengths of the two strings
//     if (strlen(str1) > strlen(str2))
//     {
//         printf("Length of string 1 is greater.");
//     }
//     else if (strlen(str1) < strlen(str2))
//     {
//         printf("Length of string 2 is greater.");
//     }
//     else
//     {
//         printf("string 1 and string 2 are the same.");
//     }
    
//     return 0;
// }
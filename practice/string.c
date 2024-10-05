


//normal string accept from user and print
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char s[10];
//     printf("Enter your string:\n");
//     scanf("%s",s);
//     printf("Your string is : %s",s);
// }


//accepting string from user and displaying string using 'gets' and 'puts'
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char s[10];
//     printf("Enter your string:\n");
//     gets(s);
//     printf("Your string is : \n");
//     puts(s);
// }


//using function to accept and display string
// #include<stdio.h>
// #include<string.h>

// void string(char []);

// void string(char s[])
// {
//     printf("Enter your string :\n");
//     scanf("%s",s);
//     printf("Your entered string is :\n");
//     printf("%s",s);
// }
// int main()
// {
//     char s[10];
//     string(s);
// }


//using %c to print array of characters
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char s[10]="PRASAD";

//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         printf("%c\t",s[i]);
//     }

// }


//using %c to accept and print array of characters
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char s[10] = {};
//     int i;

//     printf("Enter your string:\n");

//     for ( i = 0;i < 10; i++)
//     {
//         scanf(" %c",&s[i]);
//     }
//     s[i] = '\0';

//     for ( i = 0; s[i] != '\0'; i++)
//     {
//         printf("%c\t",s[i]);
//     }
//     return 0;
// }
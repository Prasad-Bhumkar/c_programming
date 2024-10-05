// normally using strrev function

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char str[10] = "hi world";

//     printf("String before using strrev function :\n%s\n",str);

//     strrev(str);

//     printf("String after using sttrrev function :\n%s",str);

//     return 0;
// }



//reversing string without using strrev

#include<stdio.h>
#include<string.h>

int main()
{
    char str[10] = "hi world";

    printf("String before using strrev function :\n%s\n",str);

    printf("String after reversing :\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}
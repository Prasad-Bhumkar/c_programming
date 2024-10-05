
// passing individual elements

// #include<stdio.h>

// struct student{
//     char name[10];
//     int per,roll;
// };

// void display(char [],int,int);

// void display(char name[],int per,int roll)
// {
//     printf("Student Details\n");
//     printf("Name : %s\nRoll Number : %d\nPercentage : %d\n",name,roll,per);

// }

// int main()
// {
//     struct student s1;

//     printf("Enter name, percentage and roll number :\n");
//     scanf("%s%d%d",&s1.name,&s1.per,&s1.roll);

//     display(s1.name,s1.per,s1.roll);
//     return 0;
    
// }






// passing whole structure to a function by setting return type as      struct struct_name fn_name(); 

// #include<stdio.h>

// struct student
// {
//     char name[10];
//     int per,roll;
// };

// struct student accept();
// struct student display();

// struct student accept()
// {
//     struct student s1;
   
//     printf("Enter name, roll number and percentage :\n");
//     scanf("%s%d%d",s1.name,&s1.roll,&s1.per);

//     return s1;

    
// }

// struct student display()
// {
//     struct student s1;

//     printf("Student Details\n");
//     printf("Name : %s\nRoll Number : %d\nPercentage : %d\n",s1.name,s1.roll,s1.per);
// }
// int main()
// {
//     struct student s1;

//     s1 = accept();

//     s1 = display();

//     return 0;
    
// }





//passing structure to a function as argument by creating an array of size -> (desired no of rows) and passing it to funnction


// #include<stdio.h>

// struct student
// {
//     char name[10];
//     int per,roll;
// };

// void accept(struct student s[],int n);
// void display(struct student s[],int n);

// void accept(struct student s[],int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter name, roll number and percentage :\n");
//         scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].per);
//     }
   
// }

// void display(struct student s[],int n)
// {
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("Details of Student %d:\n",i+1);
//         printf("Name : %s\nRoll Number : %d\nPercentage : %d\n\n",s[i].name,s[i].roll,s[i].per);    
//     }
    
// }
// int main()
// {
//     int n ;

//     printf("Enter number of students :\n");
//     scanf("%d",&n);
    
//     struct student s[n];

//     accept(s,n);

//     display(s,n);

//     return 0;
    
// }






//passing structure address to a function using pointer *

// #include<stdio.h>

// struct student
// {
//     char name[30];
//     int roll;
//     float per;
// };

// void accept(struct student *s,int n);
// void display(struct student *s,int n);

// void accept(struct student *s,int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter name, roll number and percentage :\n");
//         scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].per);
//     }
   
// }

// void display(struct student *s,int n)
// {
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("Details of Student %d:\n",i+1);
//     //If you want to control the number of decimal places, you can use %.2f, which will limit the output to two decimal places (e.g., 89.50%).
//     //%.2f%%      '%%' after %.2f is for including % in output.
//         printf("Name : %s\nRoll Number : %d\nPercentage : %.2f%%\n\n",s[i].name,s[i].roll,s[i].per);    
//     }
    
// }
// int main()
// {
//     int n = 3;
//     struct student students[3];

//     accept(students,n);

//     display(students,n);

//     return 0;
    
// }




//passing structure address to a function using pointer * accept user input in main

// #include<stdio.h>

// struct student
// {
//     char name[30];
//     int roll;
//     float per;
// };

// void display(struct student *);

// void display(struct student *s)
// {
    
//         printf("Details of Student :\n");
//     //If you want to control the number of decimal places, you can use %.2f, which will limit the output to two decimal places (e.g., 89.50%).
//     //%.2f%%      '%%' after %.2f is for including % in output.
//         printf("Name : %s\nRoll Number : %d\nPercentage : %.2f%%\n\n",s->name,s->roll,s->per);    
    
    
// }
// int main()
// {
//     int n = 3;
//     struct student s;

//     printf("Enter name, roll number and percentage :\n");
//     scanf("%s %d %f",s.name,&s.roll,&s.per);
    
//     display(&s);

//     return 0;
    
// }

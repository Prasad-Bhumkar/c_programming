//accept in main function

// #include<stdio.h>

// struct emp
// {
//     char name[30];
//     int id;
//     float salary;
// };

// void display(struct emp *);

// void display(struct emp *e)
// {
    
//         printf("Details of Employee :\n");
//     //If you want to control the number of decimal places, you can use %.2f, which will limit the output to two decimal places (e.g., 89.50%).
    
//         printf("Name : %s\nEmployee ID : %d\nSalary : %.2f\n\n",e->name,e->id,e->salary);    
    
    
// }
// int main()
// {
//     int n = 3;
//     struct emp e;

//     printf("Enter name, employee id and salary :\n");
//     scanf("%s %d %f",e.name,&e.id,&e.salary);
    
//     display(&e);

//     return 0;
    
// }





//accept in main function

#include<stdio.h>

struct emp
{
    char name[30];
    int id;
    float salary;
};

void display(struct emp *);

struct emp accept();

struct emp accept()
{
    struct emp e;

    printf("Enter name, employee id and salary :\n");
    scanf("%s %d %f",e.name,&e.id,&e.salary);

    return e;
}

void display(struct emp *e)
{
    
        printf("Details of Employee :\n");
    //If you want to control the number of decimal places, you can use %.2f, which will limit the output to two decimal places (e.g., 89.50%).
    
        printf("Name : %s\nEmployee ID : %d\nSalary : %.2f\n\n",e->name,e->id,e->salary);    
    
    
}
int main()
{
    int n = 3;
    
    struct emp e;//one structure variable of structure i-----> an array containing all elements of struct as a row 

    e = accept(&e);
    display(&e);

    return 0;
    
}

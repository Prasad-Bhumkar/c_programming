#include<stdio.h>

int main()
{
    //creating structure
    struct employees
    {
        int id;
        char name[10];
        int salary;
    };
    
    //creating structure variables
    struct employees e1,e2,e3;

// accepting elements of structure

        printf("Enter employee id, name and salary of employee 1 :\n");
        scanf("%d%s%d",&e1.id,&e1.name,&e1.salary);
        printf("Enter employee id, name and salary of employee 2 :\n");
        scanf("%d%s%d",&e2.id,&e2.name,&e2.salary);
        printf("Enter employee id, name and salary of employee 3 :\n");
        scanf("%d%s%d",&e3.id,&e3.name,&e3.salary);

        printf("\n\n");
    
//displaying elements of structure

        printf("Details of employee 1:\n");
        printf("Employee id :%d\nEmployee name :%s\nEmployee salary :%d\n",e1.id,e1.name,e1.salary);
        printf("Details of employee 2:\n");
        printf("Employee id :%d\nEmployee name :%s\nEmployee salary :%d\n",e2.id,e2.name,e2.salary);
        printf("Details of employee 3:\n");
        printf("Employee id :%d\nEmployee name :%s\nEmployee salary :%d\n",e3.id,e3.name,e3.salary);

    return 0;
}
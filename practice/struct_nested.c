#include<stdio.h>
#include<string.h>

struct emp   //depends on organization
{
    int id;
    char name[20];
    float salary;
};

struct organization
{
    int org_id;
    char org_name[20];

    struct emp e;
};

int main()
{
    struct organization org;

    org.org_id = 74101;
    strcpy(org.org_name, "Bgmi"); 
    org.e.id = 101;
    strcpy(org.e.name , "prasad");
    org.e.salary = 35000;

    printf("Organization Details :\n");
    printf("Organization ID :%d\nOrganization Name :%s\n\n",org.org_id,org.org_name);
    printf("Employee Details :\n");
    printf("Employee ID :%d\nEmployee Name :%s\nEmployee Salary :%.2f\n\n",org.e.id,org.e.name,org.e.salary);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
int main()
{
    int empid, deptno;
    printf("Enter EMPID: ");
    scanf("%d", &empid);
    printf("Enter DEPTNO: ");
    scanf("%d", &deptno);

    char dept_name[20], designation_code, designation[20];

    switch (deptno)
    {
        case 10:
            strcpy(dept_name, "purchase");
            designation_code = 'M';
            strcpy(designation, "manager");
            break;
        case 20:
            strcpy(dept_name, "sales");
            designation_code = 'A';
            strcpy(designation, "Analyst");
            break;
        case 30:
            strcpy(dept_name, "production");
            designation_code = 'W';
            strcpy(designation, "worker");
            break;
        case 40:
            strcpy(dept_name, "Marketing");
            designation_code = 'S';
            strcpy(designation, "sales-person");
            break;
        case 50:
            strcpy(dept_name, "accounts");
            designation_code = 'C';
            strcpy(designation, "clerk");
            break;
        default:
            printf("Invalid DEPTNO!\n");
            return 0;
    }

    printf("Employee with EMPID %d works in %s dept as %s\n", empid, dept_name, designation);

    return 0;
}
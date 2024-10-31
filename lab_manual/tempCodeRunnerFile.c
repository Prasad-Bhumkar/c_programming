#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Data Types\tSize\t\tRange\t\t\tFormat Specifiers\n");
    printf("char\t\t%zu\t\t-128 to 127\t\t%%c\n", sizeof(char));
    printf("int\t\t%zu\t\t%d to %d\t\t%%d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("float\t\t%zu\t\t1.2E-38 to 3.4E+38\t%%f\n", sizeof(float));
    printf("double\t\t%zu\t\t2.3E-308 to 1.7E+308\t%%lf\n", sizeof(double));
    printf("long int\t%zu\t\t%ld to %ld\t\t%%ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("long double\t%zu\t\t3.4E-4932 to 1.1E+4932\t%%Lf\n", sizeof(long double));
    return 0;
}
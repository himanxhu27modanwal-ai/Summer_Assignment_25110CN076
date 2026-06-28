#include <stdio.h>
struct Employee
{
    int empId;
    char name[50];
    float salary;
};
int main()
{
    struct Employee e;
    printf("===== Employee Management System =====\n");
    printf("Enter Employee ID: ");
    scanf("%d", &e.empId);
    printf("Enter Employee Name: ");
    scanf("%s", e.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);
    printf("\n----- Employee Details -----\n");
    printf("Employee ID     : %d\n", e.empId);
    printf("Employee Name   : %s\n", e.name);
    printf("Employee Salary : %.2f\n", e.salary);
    if (e.salary >= 30000)
    {
        printf("Salary Status   : Good Salary\n");
    }
    else
    {
        printf("Salary Status   : Basic Salary\n");
    }
    return 0;
}
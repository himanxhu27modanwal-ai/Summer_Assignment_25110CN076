#include <stdio.h>
#include <string.h>

struct Employee
{
    int empId;
    char name[50];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int total = 0;
    int choice, i, id, found;

    while (1)
    {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[total].empId);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[total].name);

                printf("Enter Department: ");
                scanf(" %[^\n]", emp[total].department);

                printf("Enter Salary: ");
                scanf("%f", &emp[total].salary);

                total++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if (total == 0)
                {
                    printf("No Employee Records Available.\n");
                }
                else
                {
                    printf("\nEmployee Records:\n");

                    for (i = 0; i < total; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("Employee ID : %d\n", emp[i].empId);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Department  : %s\n", emp[i].department);
                        printf("Salary      : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                found = 0;

                printf("Enter Employee ID to Search: ");
                scanf("%d", &id);

                for (i = 0; i < total; i++)
                {
                    if (emp[i].empId == id)
                    {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", emp[i].empId);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Department  : %s\n", emp[i].department);
                        printf("Salary      : %.2f\n", emp[i].salary);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee Not Found!\n");
                }
                break;

            case 4:
                found = 0;

                printf("Enter Employee ID: ");
                scanf("%d", &id);

                for (i = 0; i < total; i++)
                {
                    if (emp[i].empId == id)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);

                        printf("Salary Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee Not Found!\n");
                }
                break;

            case 5:
                found = 0;

                printf("Enter Employee ID to Delete: ");
                scanf("%d", &id);

                for (i = 0; i < total; i++)
                {
                    if (emp[i].empId == id)
                    {
                        int j;
                        for (j = i; j < total - 1; j++)
                        {
                            emp[j] = emp[j + 1];
                        }

                        total--;
                        printf("Employee Deleted Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee Not Found!\n");
                }
                break;

            case 6:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
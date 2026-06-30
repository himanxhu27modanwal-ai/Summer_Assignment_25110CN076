#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int total = 0;

void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}

void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d", &s[total].roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s[total].name);

    printf("Enter Marks: ");
    scanf("%f", &s[total].marks);

    total++;
    printf("Student Added Successfully!\n");
}

void displayStudents()
{
    int i;

    if (total == 0)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\nStudent Records:\n");

    for (i = 0; i < total; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Marks   : %.2f\n", s[i].marks);
    }
}

void searchStudent()
{
    int i, roll, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for (i = 0; i < total; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("Marks   : %.2f\n", s[i].marks);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Student Not Found!\n");
    }
}

void deleteStudent()
{
    int i, j, roll, found = 0;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &roll);

    for (i = 0; i < total; i++)
    {
        if (s[i].roll == roll)
        {
            for (j = i; j < total - 1; j++)
            {
                s[j] = s[j + 1];
            }

            total--;
            found = 1;
            printf("Student Deleted Successfully!\n");
            break;
        }
    }

    if (found == 0)
    {
        printf("Student Not Found!\n");
    }
}
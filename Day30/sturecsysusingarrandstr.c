#include <stdio.h>
#include <string.h>
struct Student
{
    int rollNo;
    char name[50];
    char course[30];
};
int main()
{
    struct Student student[100];
    int total = 0;
    int choice, i, roll, found;
    while (1)
    {
        printf("\n===== Student Record System =====\n");
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
                printf("Enter Roll Number: ");
                scanf("%d", &student[total].rollNo);
                printf("Enter Student Name: ");
                scanf(" %[^\n]", student[total].name);
                printf("Enter Course Name: ");
                scanf(" %[^\n]", student[total].course);
                total++;
                printf("Student Record Added Successfully!\n");
                break;
            case 2:
                if (total == 0)
                {
                    printf("No Student Records Available.\n");
                }
                else
                {
                    printf("\nStudent Records:\n");
                    for (i = 0; i < total; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll Number : %d\n", student[i].rollNo);
                        printf("Name        : %s\n", student[i].name);
                        printf("Course      : %s\n", student[i].course);
                    }
                }
                break;
            case 3:
                found = 0;
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);
                for (i = 0; i < total; i++)
                {
                    if (student[i].rollNo == roll)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll Number : %d\n", student[i].rollNo);
                        printf("Name        : %s\n", student[i].name);
                        printf("Course      : %s\n", student[i].course);
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Student Record Not Found!\n");
                }
                break;
            case 4:
                found = 0;
                printf("Enter Roll Number to Delete: ");
                scanf("%d", &roll);
                for (i = 0; i < total; i++)
                {
                    if (student[i].rollNo == roll)
                    {
                        int j;
                        for (j = i; j < total - 1; j++)
                        {
                            student[j] = student[j + 1];
                        }

                        total--;
                        found = 1;
                        printf("Student Record Deleted Successfully!\n");
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Student Record Not Found!\n");
                }
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
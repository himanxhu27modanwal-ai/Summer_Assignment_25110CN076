#include <stdio.h>
#include <string.h>
struct Library
{
    int id;
    char name[50];
    char author[50];
};
int main()
{
    struct Library book[100];
    int total = 0;
    int choice, i, searchId, found;
    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &book[total].id);
            printf("Enter Book Name: ");
            scanf(" %[^\n]", book[total].name);
            printf("Enter Author Name: ");
            scanf(" %[^\n]", book[total].author);
            total++;
            printf("Book Added Successfully!\n");
            break;
        case 2:
            if (total == 0)
            {
                printf("\nNo Books Available.\n");
            }
            else
            {
                printf("\nBook List:\n");
                for (i = 0; i < total; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("ID     : %d\n", book[i].id);
                    printf("Name   : %s\n", book[i].name);
                    printf("Author : %s\n", book[i].author);
                }
            }
            break;
        case 3:
            found = 0;
            printf("\nEnter Book ID to Search: ");
            scanf("%d", &searchId);
            for (i = 0; i < total; i++)
            {
                if (book[i].id == searchId)
                {
                    printf("\nBook Found!\n");
                    printf("ID     : %d\n", book[i].id);
                    printf("Name   : %s\n", book[i].name);
                    printf("Author : %s\n", book[i].author);
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("Book Not Found!\n");
            }
            break;
        case 4:
            found = 0;
            printf("\nEnter Book ID to Delete: ");
            scanf("%d", &searchId);
            for (i = 0; i < total; i++)
            {
                if (book[i].id == searchId)
                {
                    int j;
                    for (j = i; j < total - 1; j++)
                    {
                        book[j] = book[j + 1];
                    }
                    total--;
                    found = 1;
                    printf("Book Deleted Successfully!\n");
                    break;
                }
            }
            if (found == 0)
            {
                printf("Book Not Found!\n");
            }
            break;
        case 5:
            printf("Thank You!\n");
            return 0;
        default:
            printf("Invalid Choice! Please Try Again.\n");
        }
    }
    return 0;
}
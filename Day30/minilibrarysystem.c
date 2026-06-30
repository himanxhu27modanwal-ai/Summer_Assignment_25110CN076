#include <stdio.h>
#include <string.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int issued;
};

int main()
{
    struct Book book[100];
    int total = 0;
    int choice, i, id, found;

    while (1)
    {
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &book[total].bookId);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", book[total].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[total].author);

                book[total].issued = 0;
                total++;

                printf("Book Added Successfully!\n");
                break;

            case 2:
                if (total == 0)
                {
                    printf("No Books Available.\n");
                }
                else
                {
                    printf("\nBook List:\n");

                    for (i = 0; i < total; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID : %d\n", book[i].bookId);
                        printf("Title   : %s\n", book[i].title);
                        printf("Author  : %s\n", book[i].author);

                        if (book[i].issued == 0)
                            printf("Status  : Available\n");
                        else
                            printf("Status  : Issued\n");
                    }
                }
                break;

            case 3:
                found = 0;

                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                for (i = 0; i < total; i++)
                {
                    if (book[i].bookId == id)
                    {
                        if (book[i].issued == 0)
                        {
                            book[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book is Already Issued.\n");
                        }

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

                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                for (i = 0; i < total; i++)
                {
                    if (book[i].bookId == id)
                    {
                        if (book[i].issued == 1)
                        {
                            book[i].issued = 0;
                            printf("Book Returned Successfully!\n");
                        }
                        else
                        {
                            printf("Book is Already Available.\n");
                        }

                        found = 1;
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
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
struct Contact
{
    char name[50];
    char phone[15];
};
int main()
{
    struct Contact contact[100];
    int total = 0;
    int choice, i, found;
    char searchName[50];
    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", contact[total].name);
                printf("Enter Phone Number: ");
                scanf("%s", contact[total].phone);
                total++;
                printf("Contact Added Successfully!\n");
                break;
            case 2:
                if (total == 0)
                {
                    printf("No Contacts Available.\n");
                }
                else
                {
                    printf("\nContact List:\n");
                    for (i = 0; i < total; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name  : %s\n", contact[i].name);
                        printf("Phone : %s\n", contact[i].phone);
                    }
                }
                break;
            case 3:
                found = 0;
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", searchName);
                for (i = 0; i < total; i++)
                {
                    if (strcmp(contact[i].name, searchName) == 0)
                    {
                        printf("\nContact Found!\n");
                        printf("Name  : %s\n", contact[i].name);
                        printf("Phone : %s\n", contact[i].phone);
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Contact Not Found!\n");
                }
                break;
            case 4:
                found = 0;
                printf("Enter Name to Delete: ");
                scanf(" %[^\n]", searchName);
                for (i = 0; i < total; i++)
                {
                    if (strcmp(contact[i].name, searchName) == 0)
                    {
                        int j;
                        for (j = i; j < total - 1; j++)
                        {
                            contact[j] = contact[j + 1];
                        }
                        total--;
                        found = 1;
                        printf("Contact Deleted Successfully!\n");
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Contact Not Found!\n");
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
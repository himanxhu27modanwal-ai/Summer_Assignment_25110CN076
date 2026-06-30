#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int choice;
    printf("Enter First String: ");
    scanf(" %[^\n]", str1);
    printf("Enter Second String: ");
    scanf(" %[^\n]", str2);
    do
    {
        printf("\n===== Menu Driven String Operations =====\n");
        printf("1. Find Length of First String\n");
        printf("2. Copy First String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Display Both Strings\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Length of First String = %lu\n", strlen(str1));
                break;
            case 2:
            {
                char copy[100];
                strcpy(copy, str1);
                printf("Copied String = %s\n", copy);
                break;
            }
            case 3:
            {
                char temp[200];
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated String = %s\n", temp);
                break;
            }
            case 4:
                if (strcmp(str1, str2) == 0)
                {
                    printf("Both Strings are Equal.\n");
                }
                else
                {
                    printf("Both Strings are Different.\n");
                }
                break;
            case 5:
                printf("First String  : %s\n", str1);
                printf("Second String : %s\n", str2);
                break;
            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 6);
    return 0;
}
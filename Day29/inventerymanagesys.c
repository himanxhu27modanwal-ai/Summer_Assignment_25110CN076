#include <stdio.h>
#include <string.h>
struct Item
{
    int itemId;
    char itemName[50];
    int quantity;
    float price;
};
int main()
{
    struct Item item[100];
    int total = 0;
    int choice, i, id, found;
    while (1)
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &item[total].itemId);
                printf("Enter Item Name: ");
                scanf(" %[^\n]", item[total].itemName);
                printf("Enter Quantity: ");
                scanf("%d", &item[total].quantity);
                printf("Enter Price: ");
                scanf("%f", &item[total].price);
                total++;
                printf("Item Added Successfully!\n");
                break;
            case 2:
                if (total == 0)
                {
                    printf("No Items Available.\n");
                }
                else
                {
                    printf("\nItem List:\n");
                    for (i = 0; i < total; i++)
                    {
                        printf("\nItem %d\n", i + 1);
                        printf("ID       : %d\n", item[i].itemId);
                        printf("Name     : %s\n", item[i].itemName);
                        printf("Quantity : %d\n", item[i].quantity);
                        printf("Price    : %.2f\n", item[i].price);
                    }
                }
                break;
            case 3:
                found = 0;
                printf("Enter Item ID to Search: ");
                scanf("%d", &id);
                for (i = 0; i < total; i++)
                {
                    if (item[i].itemId == id)
                    {
                        printf("\nItem Found!\n");
                        printf("ID       : %d\n", item[i].itemId);
                        printf("Name     : %s\n", item[i].itemName);
                        printf("Quantity : %d\n", item[i].quantity);
                        printf("Price    : %.2f\n", item[i].price);
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Item Not Found!\n");
                }
                break;
            case 4:
                found = 0;
                printf("Enter Item ID: ");
                scanf("%d", &id);
                for (i = 0; i < total; i++)
                {
                    if (item[i].itemId == id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &item[i].quantity);
                        printf("Quantity Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Item Not Found!\n");
                }
                break;
            case 5:
                found = 0;
                printf("Enter Item ID to Delete: ");
                scanf("%d", &id);
                for (i = 0; i < total; i++)
                {
                    if (item[i].itemId == id)
                    {
                        int j;
                        for (j = i; j < total - 1; j++)
                        {
                            item[j] = item[j + 1];
                        }
                        total--;
                        printf("Item Deleted Successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Item Not Found!\n");
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
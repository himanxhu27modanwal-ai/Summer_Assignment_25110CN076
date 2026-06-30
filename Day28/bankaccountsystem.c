#include <stdio.h>
#include <string.h>
struct Bank
{
    int accountNo;
    char name[50];
    float balance;
};
int main()
{
    struct Bank customer[100];
    int total = 0;
    int choice, i, accNo, found;
    float amount;
    while (1)
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &customer[total].accountNo);
            printf("Enter Customer Name: ");
            scanf(" %[^\n]", customer[total].name);
            printf("Enter Initial Balance: ");
            scanf("%f", &customer[total].balance);
            total++;
            printf("Account Created Successfully!\n");
            break;
        case 2:
            if (total == 0)
            {
                printf("No Accounts Available.\n");
            }
            else
            {
                printf("\nAccount Details:\n");
                for (i = 0; i < total; i++)
                {
                    printf("\nAccount %d\n", i + 1);
                    printf("Account No : %d\n", customer[i].accountNo);
                    printf("Name       : %s\n", customer[i].name);
                    printf("Balance    : %.2f\n", customer[i].balance);
                }
            }
            break;
        case 3:
            found = 0;
            printf("Enter Account Number: ");
            scanf("%d", &accNo);
            for (i = 0; i < total; i++)
            {
                if (customer[i].accountNo == accNo)
                {
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amount);
                    customer[i].balance += amount;
                    printf("Money Deposited Successfully!\n");
                    printf("New Balance: %.2f\n", customer[i].balance);
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("Account Not Found!\n");
            }
            break;
        case 4:
            found = 0;
            printf("Enter Account Number: ");
            scanf("%d", &accNo);
            for (i = 0; i < total; i++)
            {
                if (customer[i].accountNo == accNo)
                {
                    printf("Enter Withdraw Amount: ");
                    scanf("%f", &amount);
                    if (amount <= customer[i].balance)
                    {
                        customer[i].balance -= amount;
                        printf("Money Withdrawn Successfully!\n");
                        printf("Remaining Balance: %.2f\n", customer[i].balance);
                    }
                    else
                    {
                        printf("Insufficient Balance!\n");
                    }

                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("Account Not Found!\n");
            }
            break;
        case 5:
            found = 0;
            printf("Enter Account Number: ");
            scanf("%d", &accNo);
            for (i = 0; i < total; i++)
            {
                if (customer[i].accountNo == accNo)
                {
                    printf("\nAccount Found!\n");
                    printf("Account No : %d\n", customer[i].accountNo);
                    printf("Name       : %s\n", customer[i].name);
                    printf("Balance    : %.2f\n", customer[i].balance);
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("Account Not Found!\n");
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
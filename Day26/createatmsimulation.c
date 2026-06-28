#include <stdio.h>
int main()
{
    int choice;
    float balance = 5000, amount;
    printf("===== ATM Simulation =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Your Balance = %.2f\n", balance);
    }
    else if (choice == 2)
    {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        balance = balance + amount;
        printf("Amount deposited successfully.\n");
        printf("Updated Balance = %.2f\n", balance);
    }
    else if (choice == 3)
    {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount <= balance)
        {
            balance = balance - amount;
            printf("Please collect your cash.\n");
            printf("Remaining Balance = %.2f\n", balance);
        }
        else
        {
            printf("Insufficient Balance.\n");
        }
    }
    else
    {
        printf("Invalid Choice.\n");
    }
    return 0;
}
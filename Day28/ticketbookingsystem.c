#include <stdio.h>
#include <string.h>
struct Ticket
{
    int seatNo;
    char name[50];
    int booked;
};
int main()
{
    struct Ticket seat[10];
    int i, choice, seatNo, found;
    for (i = 0; i < 10; i++)
    {
        seat[i].seatNo = i + 1;
        seat[i].booked = 0;
        strcpy(seat[i].name, "");
    }
    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Seats\n");
        printf("3. Cancel Ticket\n");
        printf("4. Search Booking\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Seat Number (1-10): ");
            scanf("%d", &seatNo);
            if (seatNo >= 1 && seatNo <= 10)
            {
                if (seat[seatNo - 1].booked == 0)
                {
                    printf("Enter Passenger Name: ");
                    scanf(" %[^\n]", seat[seatNo - 1].name);

                    seat[seatNo - 1].booked = 1;
                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Seat Already Booked!\n");
                }
            }
            else
            {
                printf("Invalid Seat Number!\n");
            }
            break;
        case 2:
            printf("\nSeat Status:\n");
            for (i = 0; i < 10; i++)
            {
                printf("Seat %d : ", seat[i].seatNo);
                if (seat[i].booked)
                    printf("Booked (%s)\n", seat[i].name);
                else
                    printf("Available\n");
            }
            break;
        case 3:
            printf("Enter Seat Number to Cancel: ");
            scanf("%d", &seatNo);
            if (seatNo >= 1 && seatNo <= 10)
            {
                if (seat[seatNo - 1].booked)
                {
                    seat[seatNo - 1].booked = 0;
                    strcpy(seat[seatNo - 1].name, "");
                    printf("Ticket Cancelled Successfully!\n");
                }
                else
                {
                    printf("Seat is Already Available!\n");
                }
            }
            else
            {
                printf("Invalid Seat Number!\n");
            }
            break;
        case 4:
            found = 0;
            printf("Enter Seat Number: ");
            scanf("%d", &seatNo);
            if (seatNo >= 1 && seatNo <= 10)
            {
                if (seat[seatNo - 1].booked)
                {
                    printf("\nBooking Found!\n");
                    printf("Seat Number : %d\n", seat[seatNo - 1].seatNo);
                    printf("Passenger   : %s\n", seat[seatNo - 1].name);
                }
                else
                {
                    printf("Seat is Available.\n");
                }
            }
            else
            {
                printf("Invalid Seat Number!\n");
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
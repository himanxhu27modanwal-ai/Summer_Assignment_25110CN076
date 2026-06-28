#include <stdio.h>
int main()
{
    int rollNo;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
    printf("===== Marksheet Generation System =====\n");
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);
    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);
    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);
    printf("Enter Marks of Subject 4: ");
    scanf("%f", &m4);
    printf("Enter Marks of Subject 5: ");
    scanf("%f", &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    printf("\n===== Marksheet =====\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    if (percentage >= 40)
    {
        printf("Result      : Pass\n");
    }
    else
    {
        printf("Result      : Fail\n");
    }
    return 0;
}
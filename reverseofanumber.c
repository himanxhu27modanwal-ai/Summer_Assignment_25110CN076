#include<stdio.h>
int main ()
{
    int num,remainder,reverse=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;

    }
    printf("the reverse number is = %d",reverse);
    return 0;
}
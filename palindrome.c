#include<stdio.h>
int main()
{
    int n,original,reverse=0,digit;
    printf("enter the number:");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }
    if(original==reverse)
    printf("number is palindrome");
    else
    printf("number is not palindrome");
    return 0;
}
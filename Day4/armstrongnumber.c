#include<stdio.h>
int main()
{
    int n,a,b,c=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        b=a%10;
        c=c+(b*b*b);
        a=a/10;
    }
    if(c==n)
    printf("it is armstrong number");
    else
    printf("it is not armstrong number ");
    return 0;
}

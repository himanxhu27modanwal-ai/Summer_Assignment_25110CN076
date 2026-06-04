#include<stdio.h>
int main ()
{
    int a,b,temp;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("VALUE OF GCD=%d",a);
    return 0;

}

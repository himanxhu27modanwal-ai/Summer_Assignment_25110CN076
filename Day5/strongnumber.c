#include<stdio.h>
int main()
{
    int n,a,b,i,sum=0,fact;
    printf("enter the value of n:");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        b=a%10;
        fact=1;
        for(i=1;i<=b;i++)
    {
        fact=fact*i;

    }
    sum=sum+fact;
    a=a/10;
}
if(sum==n)
{
    printf("it is strong number=%d",n);
}
else
{
    printf("it is not strong number=%d",n);
}
return 0;

}
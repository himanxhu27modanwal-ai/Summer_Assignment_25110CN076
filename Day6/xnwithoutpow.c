#include<stdio.h>
int main()
{
    int n,i,x, result=1;
    printf("enter base(x):");
    scanf("%d",&x);
    printf("enter power(n):");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    result=result*x;
    }
    printf("%d^%d=%d",x,n,result);
    return 0;
}
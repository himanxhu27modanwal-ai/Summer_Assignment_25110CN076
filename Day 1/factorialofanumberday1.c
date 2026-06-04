#include<stdio.h>
int main() 
{
int n,i,factorial=1;
printf("enter the number to find factorial of: ");
scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
    factorial=factorial*i;
}
printf("factorial of given no.is=%d",factorial);
return 0;
}

#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a=a+i;
        }
    }
    if(a==n)
    {
    printf("it is perfect number=%d",n);
    }
    else
    {
        printf("it is not perfect number=%d",n);
    } 
    return 0;
}
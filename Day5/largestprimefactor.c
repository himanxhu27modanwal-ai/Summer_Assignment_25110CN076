#include<stdio.h>
int main ()
{
    int n,i,j,a=0,prime;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            prime=1;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                    break;
                }

            }
            if(prime==1)
            {
                a=i;
            }
        }
    }
    printf("the largest prime factor=%d",a);
    return 0;

}
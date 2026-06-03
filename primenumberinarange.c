#include<stdio.h>
int main()
{
    int a,b,i,j,prime;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("prime numbers are:");
    for(i=a;i<=b;i++)
    {
        if(i<2)
        continue;
        prime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;

            }
        }
        if(prime)
        printf("%d\n",i);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int s,e,n,a,b,c;
    printf("enter the value of s:");
    scanf("%d",&s);
    printf("enter the value of e:");
    scanf("%d",&e);
    printf("armstrong number are:");
    for(n=s;n<=e;n++)
    {
        a=n;
        c=0;
        while(a!=0)
        {
            b=a%10;
            c=c+b*b*b;
            a=a/10;
        }
        if(c==n)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}

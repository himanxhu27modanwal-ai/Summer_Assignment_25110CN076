#include<stdio.h>
int main()
{
    int num,r,product=1;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        product=product*r;
        num=num/10;
    }
    printf("the product of digits of number is = %d",product);
    return 0;
}

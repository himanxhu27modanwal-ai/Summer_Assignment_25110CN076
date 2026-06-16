#include<stdio.h>
int main()
{
int n,i,a=0,b=0,miss;
printf("Enter value of n: ");
scanf("%d",&n);
int arr[n-1];
printf("Enter %d elements:\n",n-1);
for(i=0;i<n-1;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<=n;i++)
{
a=a+i;
}
for(i=0;i<n-1;i++)
{
b=b+arr[i];
}
miss=a-b;
printf("Missing number = %d",miss);
return 0;
}
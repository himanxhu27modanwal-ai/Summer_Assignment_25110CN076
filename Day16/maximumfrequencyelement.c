#include<stdio.h>
int main()
{
int n,i,j,c,m=0,e;
printf("Enter the value of n: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(arr[i]==arr[j])
{
c++;
}
}
if(c>m)
{
m=c;
e=arr[i];
}
}
printf("Maximum frequency element = %d",e);
return 0;
}
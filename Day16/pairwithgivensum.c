#include<stdio.h>
int main()
{
int n,i,j,s;
printf("Enter the value of n: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter sum: ");
scanf("%d",&s);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]+arr[j]==s)
{
printf("Pair=%d%d",arr[i],arr[j]);
}
}
}
return 0;
}
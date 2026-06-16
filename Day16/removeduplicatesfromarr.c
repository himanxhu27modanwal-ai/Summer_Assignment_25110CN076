#include<stdio.h>
int main()
{
int n,a,b,c;
printf("Enter the value of n: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements:\n");
for(a=0;a<n;a++)
{
scanf("%d",&arr[a]);
}
for(a=0;a<n;a++)
{
for(b=a+1;b<n;b++)
{
if(arr[a]==arr[b])
{
for(c=b;c<n-1;c++)
{
arr[c]=arr[c+1];
}
n--;
b--;
}
}
}
printf("Array after removing duplicates:\n");
for(a=0;a<n;a++)
{
printf("%d ",arr[a]);
}
return 0;
}
#include <stdio.h>
int main()
{
int arr[100],n,i,a;
printf("enter the numbeer of elements :");
scanf("%d",&n);
printf("enter array elements:\n ");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
a=arr[n-1];
for(i=n-1;i>0;i--)
{
    arr[i]=arr[i-1];
}
arr[0]=a;
printf("array after right rotation:\n");
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;

}
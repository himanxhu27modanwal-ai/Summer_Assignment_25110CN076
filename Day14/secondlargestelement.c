#include<stdio.h>
int main()
{
    int n,i,arr[100],a,b;
    printf("enter the number of elements :");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    a=b=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>a)
        {
        b=a;
        a=arr[i];
        }

    
    else if(arr[i]>b&&arr[i]!=a)
    {
        b=arr[i];
    }


}
printf("second largest element=%d",b);
return 0;
}
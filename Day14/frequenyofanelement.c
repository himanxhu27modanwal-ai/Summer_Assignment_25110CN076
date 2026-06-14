#include<stdio.h>
int main()
{
    int arr[100],n,i,a,b=0;
    printf("enter the number of elements :");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to find frequnecy:");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            b++;

        }
    }
    printf("frequency%d=%d",a,b);
    return 0;


}
#include<stdio.h>
int main()
{
    int n,i,arr[100];
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int largest=arr[0];
    int smallest=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];

        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("largest element=%d\n",largest);
    printf("smallest element=%d\n",smallest);
    return 0;


}
#include<stdio.h>
int main()
{
    int arr[100],n,i,a;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("enter elements to search:");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            printf("elements found at position=%d",i+1);
            return 0;
        }
        
    }
    printf("element not found ");
    return 0;
    
}
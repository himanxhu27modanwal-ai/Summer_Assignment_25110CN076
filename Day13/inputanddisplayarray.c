#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;

}
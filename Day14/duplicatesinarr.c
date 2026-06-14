#include<stdio.h>
int main()
{
    int n,i,j,arr[100];
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("duplicate element are :\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
        {
            printf("%d\n",arr[i]);
            break;
        }
    }
}
return 0;
}
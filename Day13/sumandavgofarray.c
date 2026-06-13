#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0;
    float avg;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

    }
    avg=sum/n;
    printf("sum=%d\n",sum);
    printf("avg=%.2f\n",avg);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i,arr[100],even=0,odd=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the array element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;

        }
        else
        {
            odd++;
        }
    }
    printf("even elements are:%d\n",even);
    printf("odd elements are:%d\n",odd);
    return 0;

}
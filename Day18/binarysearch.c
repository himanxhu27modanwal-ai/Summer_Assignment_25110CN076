#include <stdio.h>

int main()
{
    int a[100], n, i, x,l,h,m;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &x);
    l=0;
    h=n-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==x)
        {
            printf("Element found at index %d", m);
            return 0;
        }
        else if(a[m]<x)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    printf("Element not found");
    return 0;    
}
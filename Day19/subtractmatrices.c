#include <stdio.h>

int main()
{
    int r, c, i, j;
    int a[10][10], b[10][10], sub[10][10];
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Subtraction of matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
   return 0;
}
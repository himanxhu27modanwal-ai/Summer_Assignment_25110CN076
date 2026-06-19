#include <stdio.h>
int main()
{
    int r, c, i, j;
    int a[10][10];
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("Enter matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
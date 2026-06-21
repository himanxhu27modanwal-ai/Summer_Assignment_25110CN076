#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int f = 1;
    printf("Enter order of matrix: ");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                f = 0;
                break;
            }
        }
    }
    if(f == 1)
    {
        printf("Symmetric Matrix");
    }
    else
    {
        printf("Not Symmetric Matrix");
    }
    return 0;
}
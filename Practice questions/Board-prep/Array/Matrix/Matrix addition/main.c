#include <stdio.h>

int main()
{
    int m, n, i, j;
    int a[20][20], b[20][20], c[20][20];
    printf("Enter the size of your array: (mXn) \n");
    scanf("%d%d", &m, &n);
    printf("For array A: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("For array B: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n The sum is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int m, n, i, j, p, q, k;
    int a[20][20], b[20][20], c[20][20];
    printf("Enter your matrix sizes: \n (p/q) : ");
    scanf("%d%d", &p, &q);
    printf("\n (m/n) : ");
    scanf("%d%d", &m, &n);

    printf("\n Now for Matrix A: ");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Now for Matrix B: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (q == m)
    {
        for (i = 0; i < p; i++)
        {

            for (j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < m; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
    printf("\n Now for Matrix C: ");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int arrays = 2;
    int a[50][50], b[50][50], c[50][50], m, i, k, j, n;

    printf("Enter the number of rows:");
    scanf("%d", &m);
    printf("Enter the number of columns");
    scanf("%d", &n);
    for (i = 0; i < arrays; i++)
    {
        for (k = 0; k < m; k++)
        {
            for (j = 0; j < n; j++)
            {
                printf("For Array %d: (%d)th row, (%d)th col: ", i, k, j);
                scanf("%d", &a[k][j]);
            }
        }
    }

    printf("Values have been read");
}

// for (i = 0; i < m; i++)
// {
//     for (j = 0; j < n; j++)
//     {
//         printf(" %d ", a[i][j]);
//     }
//     printf("+");
//     for (j = 0; j < n; j++)
//     {
//         printf(" %d ", b[i][j]);
//     }
//     printf("\n");
// }

// for (i = 0; i < m; i++)
// {
//     for (j = 0; j < n; j++)
//     {
//         c[i][j] = a[i][j] + b[i][j];
//         printf(" %d ", c[i][j]);
//     }
//     printf("\n");
// }
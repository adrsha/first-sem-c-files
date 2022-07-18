#include <stdio.h>

int main()
{

    int a[3][3], m = 3, n = 3, i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", Sum(a, m, n));
}

int Sum(int a[3][3], int m, int n)
{
    int i, j, sum = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}
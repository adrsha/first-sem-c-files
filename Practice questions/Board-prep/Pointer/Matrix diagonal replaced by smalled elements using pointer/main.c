#include <stdio.h>

int main()
{
    int a[3][3], b[3][3];
    int n = 3, m = 3, i, j, small[3], k;

    printf("Enter your elements: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (*(a + i) + j));
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
        }
    }

    for (k = 0; k < 3; k++)
    {
        small[k] = b[0, 0];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (*(*(b + i) + j) < small[k])
                {
                    small[k] = *(*(b + i) + j);
                    *(*(b + i) + j) = 100000; // ideally the biggest no.
                }
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                *(*(a + i) + j) = small[i];
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j == 2)
            {
                *(*(a + i) + j) = small[i];
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }

    return 0;
}
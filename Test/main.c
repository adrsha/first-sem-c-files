#include <stdio.h>
int main()
{
    int i, j, k;
    int a[3][3];
    int least = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(a + i) + j));
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (*(*(a + i) + j) < least)
            {
                least = *(*(a + i) + j);
            }
        }
    }
    printf("%d is the least value of matrix\n", least);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                *(*(a + i) + j) = least;
            }
            if ((i + j) == 2)
            {
                *(*(a + i) + j) = least;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{

    int a[10], i, n;

    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        printf("(%d)th row", i);
        scanf("%d", &a[i]);
    }

    sort(a, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}

void sort(int a[], int m)
{
    int i, j, t;
    for (i = 0; i < m - 1; i++)
    {
        for (j = i + 1; j < m; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
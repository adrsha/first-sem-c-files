#include <stdio.h>

void input(int[][20], int[][20], int, int);
void add(int[][20], int[][20], int[][20], int, int);
void display(int[][20], int, int);

int main()
{
    int m, n, p, q, i, j, a[20][20], b[20][20], sum[20][20];
    printf("Enter the size of first matrix: (mXn) ");
    scanf("%d%d", &m, &n);
    printf("Enter the size of first matrix: (mXn) ");
    scanf("%d%d", &p, &q);
    printf("For matrix A: \n");
    if (m == p && n == q)
    {
        input(a, b, m, n);
        add(a, b, sum, m, n);
        display(sum, m, n);
    }

    return 0;
}
void input(int a[][20], int b[][20], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the term at row %d and column %d. ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nFor matrix B: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the term at row %d and column %d. ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
}
void add(int a[][20], int b[][20], int c[][20], int p, int q)
{
    int i, j;
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
void display(int sum[][20], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
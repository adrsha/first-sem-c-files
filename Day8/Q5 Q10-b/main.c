#include <stdio.h>
void readMatrix(int[][10], int[][10], int, int, int, int);
void processMatrix(int[][10], int[][10], int[][10], int, int, int, int);
void showmatrix(int[][10], int, int);
// void showDummymatrix(int, int);
int main()
{

    int a[10][10], b[10][10], c[10][10], m, n, p, q, i, j;
    printf("Enter the value of:\n");
    printf("m :");
    scanf("%d", &m);
    printf("n :");
    scanf("%d", &n);
    printf("p :");
    scanf("%d", &p);
    printf("q :");
    scanf("%d", &q);
    if (n == p)
    {
        readMatrix(a, b, m, n, p, q);
        processMatrix(a, b, c, m, n, p, q);
        showMatrix(c, m, q);
    }
    else
    {
        printf("Enter a valid pair.");
    }
}
void readMatrix(int a[][10], int b[][10], int m, int n, int p, int q)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("(%d,%d)= ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("(%d,%d)= ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
}

void showMatrix(int c[][10], int m, int q)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf(" %d ", c[i][j]);
        }
        printf("\n");
    }
}

// void showDummyMatrix(int m, int n)
// {
//     int i, j;

//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf(" %d ", c[i][j]);
//         }
//         printf("\n");
//     }
// }

void processMatrix(int a[][10], int b[][10], int c[][10], int m, int n, int p, int q)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
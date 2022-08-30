#include <stdio.h>

void sort(int[], int);
int main()
{

    int a[20];
    int i = 0, n;
    char ans;
    while (ans != 'n')
    {
        scanf("%d", &a[i]);
        i++;
        if (i >= 5)
        {
            printf("Do you want to input more values?");
            scanf(" %c", &ans);
        }
    }
    n = i;
    sort(a, n);

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

void sort(int a[20], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
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
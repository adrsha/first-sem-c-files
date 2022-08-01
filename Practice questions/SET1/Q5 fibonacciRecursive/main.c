#include <stdio.h>
int fibo(int);

int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", fibo(i));
    }
}

int fibo(int x)
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }
    else
    {
        return (fibo(x - 1) + fibo(x - 2));
    }
}
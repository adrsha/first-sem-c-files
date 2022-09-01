#include <stdio.h>
int isPrime(int);
int main()
{

    int i, j;
    char a[20] = "pulchowk";

    for (i = 0; a[i] != NULL; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (!isPrime(i + 1))
            {
                putchar(a[j] - 32);
            }
            else
            {
                if ((j + 1) % 2 == 0)
                {
                    putchar(a[j]);
                }
                else
                {
                    if ((i + 1 + j) % 7 == 0)
                    {
                        putchar(a[j]);
                    }
                    else
                    {
                        putchar(a[j] - 32);
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}
int isPrime(int n)
{
    int c = 0, i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return 1;
    }
    return 0;
}
#include <stdio.h>

int recsum(int);

int main()
{
    int n;

    printf("Enter the number. ");
    scanf("%d", &n);
    printf("\n Recsum = %d", recsum(n));
}

int recsum(int n)
{

    if (n / 10 == 0)
    {
        return n;
    }
    else
    {
        int r, sum = 0;
        while (n != 0)
        {
            r = n % 10;
            n = n / 10;
            sum = sum + r;
        }
        return (recsum(sum));
    }
}

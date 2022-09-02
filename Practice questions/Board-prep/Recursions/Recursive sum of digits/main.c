#include <stdio.h>
int rec(int);
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    printf("The recursive sum is: %d", rec(n));

    return 0;
}

int rec(int n)
{
    if (n / 10 == 0)
    {
        return n;
    }
    else
    {
        int t = 0;
        while (n != 0)
        {
            t += n % 10;
            n = n / 10;
        }
        return rec(t);
    }
}
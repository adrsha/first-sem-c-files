#include <stdio.h>
float series(int);
int main()
{
    int n;
    printf("For the series: 1/1 + 1/4 + 1/9 + 1/16 + ... upto nth term.\n");
    printf("Enter the value for n: ->");
    scanf("%d", &n);
    printf("Sum of this series is: %f", series(n));
    return 0;
}
float series(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (1.0 / (n * n) + series(n - 1));
    }
}
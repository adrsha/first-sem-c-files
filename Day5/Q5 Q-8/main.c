#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Input the number whose digits are to be counted.");
    scanf("%d", &n);
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("%d is the sum of digits in %d", sum, n);

    return 0;
}
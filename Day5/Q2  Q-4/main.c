#include <stdio.h>
int main()
{
    int n, sum = 0, fact = 1;
    printf("Input the value of n: ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        for (int i = 0; i <= n; i++)
        {
            sum += i;
        }
        printf("Sum = %d", sum);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("Factorial = %d", fact);
    }
}
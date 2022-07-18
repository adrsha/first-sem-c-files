#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, fact, y = 1;
    float n, x, term = 1, sum = 1;
    printf("Enter the value for x. ");
    scanf("%f", &x);
    printf("Enter the value for n. ");
    scanf("%f", &n);
    for (i = 2; i <= 2 * n - 2; i += 2)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        term = pow(-1, y) * pow(x, i) / fact;
        sum = sum + term;
        y++;
    }
    printf("Sum = %f", sum);
    return 0;
}
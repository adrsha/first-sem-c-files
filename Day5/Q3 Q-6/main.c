#include <stdio.h>
int main()
{
    int i, n;
    float x, term = 1;
    printf("Input the value of n: ");
    scanf("%d", &n);
    printf("Input the value of x: ");
    scanf("%f", &x);
    for (i = 1; i <= n; i++)
    {
        term *= x / i;
    }
    printf("Sum of these terms = %f", term);
    return 0;
}
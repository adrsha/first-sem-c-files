#include <stdio.h>
#include <math.h>

float fact(float);
int main()
{
    float n, x, term, i, sum = 0;
    printf("Enter the vals of x and n");
    scanf("%f%f", &x, &n);
    for (i = 0; i < n; i++)
    {
        term = pow(x, i) / fact(i);
        sum = sum + term;
    }
    printf("sum = %f", sum);

    return 0;
}
float fact(float n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (fact(n - 1) * n);
    }
}
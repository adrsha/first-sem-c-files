#include <stdio.h>
#include <math.h>
#define PI 3.1415265359
float sine(float, float);
float power(float, float);
float factorial(float);
int main()
{
    // int *minus;
    float x, n;
    printf("Enter the values for : \n x->");
    scanf("%f", &x);
    printf("\n n->");
    scanf("%f", &n);
    printf("sine(%.2f°) = %f", x, sine(x * PI / 180, n));
    return 0;
}
float sine(float x, float n)
{
    if (n == 1)
    {
        return x;
    }
    else
    {
        return (pow(-1, n + 1) * power(x, 2 * n - 1) / factorial(2 * n - 1) + sine(x, n - 1));
    }
}
float power(float x, float n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (x * power(x, n - 1));
    }
}
float factorial(float n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

#include <stdio.h>
#include <math.h>

int main()
{
    float y, x;
    printf("Input the value of x:\n->");
    scanf("%f", &x);
    y = (pow(x, 5) + 2 * sqrt(x) * pow(x, 1.0 / 3)) / (2 - 4 * x);
    printf("y = %f", y);
    return 0;
}
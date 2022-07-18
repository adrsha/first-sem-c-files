#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x, y, ans1, ans2;
    printf("Input the coefficients of the quadratic (a,b,c):");
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d >= 0)
    {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("First root = %f\nSecond root = %f", x, y);
    }
    else
    {
        x = -b / (2 * a);
        y = sqrt(-d) / (2 * a);
        printf("First root = %f+%fi\nSecond root = %f-%fi", x, y, x, y);
    }
}
#include <stdio.h>
float add(int, float);
int main()
{
    int a;
    float b, sum;
    printf("Enter the two numbers: \n a(integer) = ");
    scanf("%d", &a);
    printf(" b(float) = ");
    scanf("%f", &b);
    sum = add(a, b);
    printf("Sum (a+b) = %f", sum);
    return 0;
}

float add(int x, float y)
{
    return (x + y);
}
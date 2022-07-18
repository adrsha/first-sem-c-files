#include <stdio.h>

int main()
{
    float p, t, r;
    printf("Input the values of: \nP = ");
    scanf("%f", &p);
    printf("T = ");
    scanf("%f", &t);
    printf("R = ");
    scanf("%f", &r);
    printf("The value of Simple Interest(I) = %f", p * t * r / 100);
    return 0;
}
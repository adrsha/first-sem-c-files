#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Input any 3 numbers.");
    scanf("%f%f%f", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
            printf("%f is the largest number.", a);
    }
    else if (b > c)
        printf("%f is the largest number.", b);
    else
        printf("%f is the largest number.", c);
}
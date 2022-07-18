#include <stdio.h>
#include <math.h>

int main()
{
    float d, x1, x2, y1, y2;
    printf("Input the values of x1, x2, y1 and y2.");
    scanf("%f%f%f%f", &x1, &x2, &y1, &y2);
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance between those points = %f", d);
    return 0;
}
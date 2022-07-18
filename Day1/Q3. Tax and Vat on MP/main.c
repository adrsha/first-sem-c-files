#include <stdio.h>
#include <math.h>

int main()
{
    float mp, sp, tax = 0.1, vat = 0.13;
    printf("Input the value of marked price. \n->");
    scanf("%f", &mp);
    sp = mp * (1 + tax) * (1 + vat);
    printf("The selling price for 10 percent vat and 13 percent tax is %f", sp);
}
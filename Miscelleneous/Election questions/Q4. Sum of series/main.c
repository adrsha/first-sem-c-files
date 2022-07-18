#include <stdio.h>
#include <math.h>
int main()
{
    int n, x, fact_i = 1;
    float sum = 1;
    printf("Enter the number of expressions desired, for this approximation of e^x. \n-> n = ");
    scanf("%d", &n);
    n--;
    printf("Enter the value of the variable. \n-> x = ");
    scanf("%d", &x);
    for (int i = 1; i <= n; i++)
    {
        fact_i *= i;
        sum = sum + pow(x, i) / fact_i;
    }
    printf("The required sum is: \n= %f", sum);
}
#include <stdio.h>
#include <math.h>
int main()
{
    int n, x, fact_i = 1;
    float sum = 1, term;
    printf("Enter the value of the variable. \n-> x = ");
    scanf("%d", &x);
    for (int i = 1; i >= 0; i++)
    {
        fact_i *= i;
        term = pow(x, i) / fact_i;
        sum = sum + term;
        if (term <= 1.0 / 1000000)
        {
            break;
        }
    }
    printf("The required sum is: \n= %f", sum);
}
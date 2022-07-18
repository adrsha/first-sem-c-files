#include <stdio.h>
#include <math.h>

int factorialOf(int);
int sumFromOne(int);
int HCF(int, int);

int main()
{
    int a, b, x;
    printf("Enter the values on the left to perform the respective operations to the right.\n");
    printf("1 => To find factorial\n");
    printf("2 => To find sum to n\n");
    printf("3 => To find hcf of two numbers\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Enter the value of the number whose factorial you need.\n");
        scanf("%d", &a);
        printf("The factorial of %d is %d", a, factorialOf(a));
        break;

    case 2:
        printf("Enter the value of the number whose sum from one you need.\n");
        scanf("%d", &a);
        printf(" The sum from 1 to %d is %d", a, sumFromOne(a));
        break;
    case 3:
        printf("Enter the value of the number whose sum from one you need.");
        scanf("%d%d", &a, &b);
        printf("The HCF of %d and %d is %d.", a, b, HCF(a, b));
        break;

    default:
        break;
    }

    return 0;
}
int HCF(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    else
    {
        return (HCF(y, x % y));
    }
}
int sumFromOne(int n)
{
    int sum = 0, i;
    for (i = 0; i <= n; i++)
    {
        sum += n;
    }
    return sum;
}
int factorialOf(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
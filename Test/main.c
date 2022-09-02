#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter any integer n : ");
    scanf("%d", &n);
    if (n == 0)
    {
        sum = 0;
        printf("The sum is %d ", sum);
    }
    else
    {
        sum = (n % 9 == 0) ? 9 : n % 9;
        printf("The sum is %d ", sum);
    }

    return 0;
}
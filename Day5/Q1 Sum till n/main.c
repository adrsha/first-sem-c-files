#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Input the number till which you want the sum: \n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d is the sum of all numbers upto %d", sum, n);
}
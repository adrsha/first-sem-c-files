#include <stdio.h>

int main()
{
    int i, j, n1, n2, c, p = 0;
    printf("Input the number range to check if it's prime: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    for (j = n1; j <= n2; j++)
    {
        c = 0;
        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("prime number: %d \n", j);
            p++;
        }
    }
    printf("The total number of prime numbers is %d.", p);
    return 0;
}
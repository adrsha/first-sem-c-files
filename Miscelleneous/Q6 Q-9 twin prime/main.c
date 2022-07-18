#include <stdio.h>
int is_prime(int);
int main()
{
    int n, c = 0;
    printf("Input the number to check if it's a twin prime: ");
    scanf("%d", &n);
    if (is_prime(n))
    {
        if (is_prime(n - 2) || is_prime(n + 2))
        {
            printf("It is a twin prime");
        }
        else
        {
            printf("It isnt a twin prime.");
        }
    }
    else
    {
        printf("%d isn't even prime.", n);
    }
}
int is_prime(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
            if (c >= 3)
            {
                return 0;
            }
        }
    }
    return 1;
}
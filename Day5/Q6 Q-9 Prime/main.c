#include <stdio.h>

int main()
{
    int n, c = 0;
    printf("Input the number to check if it's prime: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
            if (c >= 3)
            {
                printf("It is not prime");
                break;
            }
        }
    }
    if (c < 3)
    {
        printf("It is prime.");
    }
    return 0;
}
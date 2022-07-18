#include <stdio.h>

int main()
{
    int n, sumo = 0, sume = 0;
    printf("Input the number whose digits are to be counted.");
    scanf("%d", &n);
    while (n != 0)
    {
        if ((n % 10) % 2 == 0)
            sume = sume + n % 10;
        else
            sumo = sumo + n % 10;
        n = n / 10;
    }
    printf("%d is the sum of even digits in %d, and %d is the sum of odd digits in %d", sume, n, sumo, n);

    return 0;
}
#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0 && i % 3 != 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum = %d", sum);

    return 0;
}

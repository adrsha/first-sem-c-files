#include <stdio.h>

int main()
{
    int a, b, m, n;
    printf("Input any 2 numbers: \n");
    scanf("%d%d", &a, &b);

    for (int i = 1; i <= b; i++)
    {
        m = i * a;
        for (int j = 1; j <= a; j++)
        {
            n = j * b;
            if (n == m)
            {
                printf("The LCM is: %d", n);
                break;
            }
        }
        if (n == m)
        {
            break;
        }
    }

    return 0;
}

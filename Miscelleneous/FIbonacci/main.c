#include <stdio.h>

int main()
{
    int a = 0, b = 1, c = 0;

    while (b <= 500)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", a);
    }

    return 0;
}
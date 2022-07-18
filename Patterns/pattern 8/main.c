#include <stdio.h>

int main()
{
    int m = 1, s;
    s = 0;
    for (int i = 4; i >= 1 && i <= 4; i--)
    {
        for (int j = 4; j >= 5 - i; j--)
        {
            printf("   ");
        }
        for (int j = i; j <= 4; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
        if (s != 0 || i == 1)
        {
            i += 2;
            s++;
        }
    }
    return 0;
}
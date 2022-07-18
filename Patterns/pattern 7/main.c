#include <stdio.h>

int main()
{
    int m = 1, s;
    for (int i = 1; i <= 5; i++)
    {
        // for the spaces
        for (int j = 4; j >= i; j--)
        {
            printf("   ");
        }
        // to make the pattern
        s = 0;
        for (int j = 1; j <= i && j >= 1; j += m)
        {
            printf(" %d ", j);
            if (s != 0 || j == i)
            {
                j -= 2;
                s++;
            }
        }
        printf("\n");
    }

    return 0;
}
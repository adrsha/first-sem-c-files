#include <stdio.h>
#include <math.h>

int main()
{
    int j, k = 0;
    for (j = 5; j >= 1 && j <= 5; j--)
    {
        printf("%d, ", j);
        (j == 1) ? printf("\n") : 0;
        if (k != 0 || j == 1)
        {
            j += 2;
            k++;
        }
    }
    return 0;
}
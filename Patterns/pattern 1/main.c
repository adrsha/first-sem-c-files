#include <stdio.h>
// 12345
// 1234
// 123
// 12
// 1

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}
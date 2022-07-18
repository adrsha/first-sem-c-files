#include <stdio.h>
//     1
//    12
//   123
//  1234
// 12345
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf("   ", j);
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
    return 0;
}
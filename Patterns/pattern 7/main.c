#include <stdio.h>

int main()
{
    int m = 1, s;
    for (int i = 5; i >= 1; i--)
    {
        // for the spaces
        for (int j = 1; j <= i; j++)
        {
            printf("   ");
        }

        // to make the pattern
        for (int j=5; j>=i; j--){
            printf(" %d ", j);
        }
        for (int j=i+1; j<=5; j++){
            printf(" %d ", j);
        }
        // s = 0;
        // for (int j = 1; j <= i && j >= 1; j += m)
        // {
        //     printf(" %d ", j);
        //     if (s != 0 || j == i)
        //     {
        //         j -= 2;
        //         s++;
        //     }
        // }

        printf("\n");
        printf("\n");
    }

    return 0;
}
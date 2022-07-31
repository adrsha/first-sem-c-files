#include <stdio.h>
//  input a number greater than 0 and a number less than 0
int main()
{
    int n, m;
    scanf("%d", &n);
    m = n;
    printf("\nFor while:\n");
    while (n > 0)
    {
        printf(" %d \n", n);
        n--;
    }
    printf("\nFor do-while:\n");
    do
    {
        printf(" %d \n", m);
        m--;
    } while (m > 0);

    return 0;
}
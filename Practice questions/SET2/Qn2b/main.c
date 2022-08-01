#include <stdio.h>

int main()
{
    int a, b;
    double c = 123.55667788;
    char str[] = "I enjoy programming.";
    scanf("%3d%2d", &a, &b);
    printf("%d   %d\n", a, b);
    printf("a = %5\n b=%-6d", a, b);
    printf("\n%0.3f", c);
    printf("\n%-10.6f", c);
    return 0;
}
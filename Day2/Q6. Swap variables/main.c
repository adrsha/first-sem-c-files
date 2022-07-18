#include <stdio.h>
int main()
{
    int a, b, x;
    printf("Input a value for a and b. \n");
    scanf("%d%d", &a, &b);
    x = a;
    a = b;
    b = x;
    printf("%d is in b now.", b);
    printf("%d is in a now.", a);
}
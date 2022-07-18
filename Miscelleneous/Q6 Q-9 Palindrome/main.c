#include <stdio.h>
int main()
{

    int n, r, m, rev = 0;
    printf("Input the number: ");
    scanf("%d", &n);

    m = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (m == rev)
    {
        printf("This number is a palindrome!");
    }
    else
    {
        printf("This number isn't a palindrome.");
    }
    return 0;
}
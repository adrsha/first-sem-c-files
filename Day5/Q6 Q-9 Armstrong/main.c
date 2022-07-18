#include <stdio.h>
#include <math.h>
int main()
{

    int n, m, p, r, arm = 0, o = 0;
    printf("Input the number: ");
    scanf("%d", &n);
    m = n;
    while (m != 0)
    {
        m = m / 10;
        o++;
    }
    p = n;
    while (p != 0)
    {
        r = p % 10;
        arm = arm + pow(r, o);
        p = p / 10;
    }
    if (n == arm)
    {
        printf("%d is an Armstrong number!", n);
    }
    else
    {
        printf("%d is not an Armstrong number", n);
    }

    return 0;
}
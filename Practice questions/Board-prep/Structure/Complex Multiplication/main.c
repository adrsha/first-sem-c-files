#include <stdio.h>

typedef struct Complex
{
    int re;
    int im;
} cm;

int main()
{
    cm z, w, r;
    printf("Input your two complex numbers: \n");
    printf("Z =\n real: ");
    scanf("%d", &z.re);
    printf("imaginary: ");
    scanf("%d", &z.im);
    printf("W =\n real: ");
    scanf("%d", &w.re);
    printf("imaginary: ");
    scanf("%d", &w.im);

    r.re = (z.re * w.re - z.im * w.im);
    r.im = (z.re * w.im + z.im * w.re);

    printf("Their product is: %d + %di", r.re, r.im);
    return 0;
}
#include <stdio.h>

typedef struct DATE
{
    int y;
    int m;
    int d;
} date;

int main()
{
    date bs, ad;

    printf("Enter your date in BS: ");
    scanf("%d-%d-%d", &bs.y, &bs.m, &bs.d);

    ad.y = bs.y - 56;
    if (bs.m > 8)
    {
        ad.m = bs.m - 8;
    }
    else
    {
        ad.m = 12 - (8 - bs.m);
        ad.y--;
    }
    if (bs.d > 17)
    {
        ad.d = bs.d - 17;
    }
    else
    {
        ad.d = 30 - (17 - bs.d);
        ad.m--;
    }

    printf("Hence the approx AD format of %d-%d-%d is %d-%d-%d", bs.y, bs.m, bs.d, ad.y, ad.m, ad.d);

    return 0;
}
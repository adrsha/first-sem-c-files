#include <stdio.h>
#include <math.h>

int main()
{

    int n, l, i, t, j;
    printf("Upto which number do you want to see armstrongs: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        l = (int)log10(i) + 1;
        t = 0;
        j = i;
        while (j != 0)
        {
            t = t + pow(j % 10, l);
            j = j / 10;
        }
        if (t == i)
        {
            printf("%d\n", t);
        }
    }

    return 0;
}
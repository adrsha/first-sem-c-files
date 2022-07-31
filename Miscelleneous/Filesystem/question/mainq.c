

#include <stdio.h>

int main()
{
    int nonum, i;
    FILE *p;
    printf("How many numbers do you want to print?\n");
    scanf("%d", &nonum);

    p = fopen("Numbers.txt", "w");

    printf("Enter your numbers: ");
    for (i = 0; i < nonum; i++)
    {
        int d;
        scanf("%d", &d);
        fprintf(p, "%d", d);
    }

    return;
}

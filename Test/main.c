#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, num, num1;
    FILE *p, *pe;
    p = fopen("numbers.txt", "w+");

    printf("Enter the number of numbers you want to input.");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        fprintf(p, "%d\n", &num);
    }
    rewind(p);
    while (fscanf(p, "%d", &num1) != EOF)
    {
        if (num1 % 2 == 0)
        {
            fprintf(pe, "%d")
        }
    }
}
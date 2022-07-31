#include <stdio.h>

int main()
{

    FILE *p, *pe, *po;
    int n, num, i;

    p = fopen("Numbers.txt", "w+");
    po = fopen("Odd.txt", "w");
    pe = fopen("Even.txt", "w");

    printf("Enter the number of your numbers: ");
    scanf("%d", &n);
    printf("Enter your numbers:");
    // to input the numbers into a file
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        fprintf(p, "%d\n", num);
    }
    // to separate odds and evens into different files
    rewind(p);
    while (fscanf(p, "%d", &num) != EOF)
    {
        // fscanf(p, "%d", &num);
        if (num % 2 == 0)
            fprintf(pe, "%d\n", num);
        else
            fprintf(po, "%d\n", num);
    }

    return 0;
}
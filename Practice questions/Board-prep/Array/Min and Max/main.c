#include <stdio.h>

int main()
{
    int *address;
    int n, l, s, i;
    printf("Enter the number of elements. \n");
    scanf("%d", &n);
    address = (int *)calloc(n, sizeof(int));

    printf("Enter the elements. \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", address + i);
    }

    for (i = 0; i < n; i++)
    {
        if (*(address + i) > l)
        {
            l = *(address + i);
        }
        if (*(address + i) < s)
        {
            s = *(address + i);
        }
    }
    printf("largest = %d and smallest = %d", l, s);

    return 0;
}
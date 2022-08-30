#include <stdio.h>

int main()
{
    int a[20], n, o, i;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("\nEnter your elements. \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("What do you want me to find? ");
    scanf("%d", &o);

    for (i = 0; i < n; i++)
    {
        if (a[i] == o)
        {
            printf("Your element is the %dth element", i + 1);
        }
    }

    return 0;
}
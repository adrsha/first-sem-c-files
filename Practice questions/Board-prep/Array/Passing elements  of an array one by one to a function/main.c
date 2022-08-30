#include <stdio.h>

void pass_func(int, int);

int main()
{

    int n, a[20], i;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);
    printf("Input your array elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        pass_func(a[i], i);
    }

    return 0;
}

void pass_func(int e, int n)
{
    printf("The element is: %d and it is the %dth element. \n", e, n);
}
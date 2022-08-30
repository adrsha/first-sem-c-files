// WAP to read n numbers in an array . Pass this array to a function which
// finds and displays the sum of even numbers only and the product of odd
// numbers only

#include <stdio.h>

void process(int[], int);

int main()
{

    int n, i, a[20];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter your elements.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    process(a, n);

    return 0;
}

void process(int a[20], int n)
{
    int i, e = 0, o = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e = e + a[i];
        }
        else
        {
            o = o * a[i];
        }
    }
    printf("%d and %d", e, o);
}
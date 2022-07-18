#include <stdio.h>
int main()
{
    int a[5], sum = 0, i;
    printf("Enter the: \n");
    for (i = 0; i < 5; i++)
    {
        printf("(%d)th element: ", i);
        scanf("%d", &a[i]);
        if (a[i] % 10 == 0 && a[i] % 15 != 0)
        {
            sum += a[i];
        }
    }
    printf("Sum = %d", sum);
}
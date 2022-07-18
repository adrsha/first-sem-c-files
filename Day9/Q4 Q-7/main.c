#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], t;
    int i, j;
    printf("Enter your string: \n");
    gets(a);
    for (i = 0; i < strlen(a) - 1; i++)
    {
        for (j = i; j < strlen(a); j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Alphabetical form = %s", a);
    return 0;
}
// H
// HE
// HEL
// HELL
// HELLO
// HELL
// HEL
// HE
// H

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char a[20];
    printf("Enter a string: ");
    scanf("%s", &a);

    // method 1
    int s = 0;
    for (i = 0; i < strlen(a), i >= 0; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", a[j]);
        }
        printf("\n");
        if (s != 0 || i == strlen(a) - 1)
        {
            i -= 2;
            s++;
        }
    }
    // method 2
    printf("\n Another method: \n");
    for (i = 0; i < strlen(a); i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", a[j]);
        }
        printf("\n");
    }
    for (i = strlen(a) - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c ", a[j]);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char str[20] = "HELLO";
    for (i = 0; i < strlen(str); i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}
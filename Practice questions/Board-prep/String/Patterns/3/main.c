// C
// CO
// COM
// COMP
// COMPU
// COMPUT
// COMPUTE
// COMPUTER

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char a[20];
    printf("Enter a string: ");
    scanf("%s", &a);
    for (i = 0; i < strlen(a); i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", a[j]);
        }
        printf("\n");
    }
    for (i = 1; i < strlen(a); i++)
    {
        for (j = i; j <= strlen(a); j++)
        {
            printf("%c ", a[j]);
        }
        printf("\n");
    }
    return 0;
}
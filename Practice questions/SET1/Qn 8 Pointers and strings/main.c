#include <stdio.h>
#include <string.h>

int main()
{
    char var[20], alpha[20];
    char *d;
    int i;

    printf("Enter your string. ");
    scanf("%s", var);

    for (i = 0; i < strlen(var); i++)
    {
        if (var[i] >= 'A' && var[i] <= 'Z' || var[i] >= 'a' && var[i] <= 'z')
        {
            d = &var[i];
            alpha[i] = *d;
        }
    }
    alpha[i] = '\0';
    printf("%s", alpha);
}
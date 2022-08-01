#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    int i, j, pal;
    printf("Enter your string.");
    scanf("%s", a);
    for (i = 0, j = strlen(a) - 1; i<(strlen(a) / 2), j>(strlen(a) / 2); i++, j--)
    {
        if (a[i] != a[j])
        {
            pal = 0;
            break;
        }
        pal = 1;
    }
    if (pal)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");
}
#include <stdio.h>
#include <string.h>
int main()
{

    char a[20];
    int i, l;
    l = strlen(a);
    printf("Input the string: ");
    scanf("%s", &a);

    for (i = 0; i < l / 2; i++)
    {
        if (a[i] != a[l - 1 - i])
        {
            break;
        }
    }
    if (i < l / 2)
    {
        printf("The string is not a palindrome!");
    }
    else
    {
        printf("The string is a palindrome!");
    }
    return 0;
}
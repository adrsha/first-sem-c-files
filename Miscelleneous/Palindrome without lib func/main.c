#include <stdio.h>
int ispalindrome(char[]);
int slength(char[]);

int main()
{
    char str[30];

    printf("Enter your string: ");
    gets(str);

    if (ispalindrome(str))
    {
        printf("%s is a palindrome.", str);
    }
    else
    {
        printf("%s is not a palindrome.", str);
    }

    return 0;
}

int ispalindrome(char str[])
{
    int i, j;
    char t, dem[30];
    scopy(dem, str);
    for (i = 0, j = slength(str) - i - 1; i < slength(str) / 2; i++, j--)
    {
        t = dem[i];
        dem[i] = dem[j];
        dem[j] = t;
    }
    if (scomp(dem, str) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int slength(char str[])
{
    int i;
    for (i = 0; str[i] != NULL; i++)
    {
    }
    return i;
}

void scopy(char a[], char b[])
{
    int i;
    for (i = 0; b[i] != NULL; i++)
    {
        a[i] = b[i];
    }
    a[i] = NULL;
}

int scomp(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != NULL; i++)
    {
        if (a[i] - b[i] != 0)
        {
            break;
        }
    }
    return i;
}
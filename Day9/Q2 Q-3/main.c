#include <stdio.h>
#include <string.h>
int wordcounter(char[]);
int main()
{
    char a[50];
    gets(a);
    printf("Number of words = %d", wordcounter(a));
}
int wordcounter(char a[])
{
    int i, c = 1;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            c++;
        }
    }
    return c;
}

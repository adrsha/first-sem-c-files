#include <stdio.h>

int noofwords(char[]);

int main()
{
    char s[20];
    printf("Enter your sentence: \n");
    scanf("%[^\n]s", &s);

    printf("%d is the no of words there.", noofwords(s));

    return 0;
}

int noofwords(char a[20])
{

    int i, c = 0;
    for (i = 0; a[i] != NULL; i++)
    {
        if (a[i] == ' ')
        {
            c++;
        }
    }
    return c + 1;
}
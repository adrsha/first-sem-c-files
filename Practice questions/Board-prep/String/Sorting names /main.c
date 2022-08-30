#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;

    char s[5][20], t[20];

    for (i = 0; i < 5; i++)
    {
        scanf("%s", s[i]);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(t, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], t);
            }
        }
    }
    printf("Output: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%s \n", s[i]);
    }

    return 0;
}
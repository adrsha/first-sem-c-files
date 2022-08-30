#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, c = 0, in;
    char s[20], w[20];
    printf("Enter your string! ");
    scanf("%s", &s);

    printf("Enter the word to search for: ");
    scanf("%s", &w);

    for (i = 0; i < strlen(s); i++)
    {
        c = 0;
        for (j = 0; j < strlen(w); j++)
        {
            if (s[i + j] == w[j])
            {
                c++;
                in = i;
            }
            else
            {
                break;
            }
            if (c == strlen(w))
            {
                printf("Word found at %dth position! \n", in + 1);
            }
        }
    }
    return 0;
}
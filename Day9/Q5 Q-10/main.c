#include <stdio.h>

void caseSwapper(char[]);

int main()
{
    char a[20];
    printf("Enter your string: \n");
    gets(a);
    caseSwapper(a);
    printf(": %s", a);
    return 0;
}
void caseSwapper(char a[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
    }
}

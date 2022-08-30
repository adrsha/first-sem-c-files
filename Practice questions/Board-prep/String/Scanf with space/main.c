#include <stdio.h>

int main()
{
    char s[20];
    printf("Input your string without entering Enter. ");
    scanf("%[^\n]s", s);
    printf("%s", s);
}
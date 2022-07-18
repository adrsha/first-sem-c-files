#include <stdio.h>
int strlen1(char[]);
void strcpy1(char[], char[]);

int main()
{
    int a[20], b[20];
    printf("Enter your string:\n");
    gets(a);
    printf("Length = %d\n", strlen1(a));
    strcpy1(b, a);
    printf("copied string = %s\n", b);
    return 0;
}
int strlen1(char a[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    return i;
}
void strcpy1(char b[], char a[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
}
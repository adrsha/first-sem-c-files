#include <stdio.h>
#include <string.h>
void rev(char[], int);

int main()
{
    char a[20];
    printf("Enter the string to reverse. \n");
    scanf("%s", a);
    rev(a, 0);
    printf("\n%s is the reverse. \n", a);
    return 0;
}
void rev(char a[20], int i)
{
    char t;
    if (i >= (int)strlen(a) / 2)
    {
        return;
    }
    else
    {
        t = a[i];
        a[i] = a[strlen(a) - 1 - i];
        a[strlen(a) - 1 - i] = t;
        rev(a, i + 1);
    }
}
#include <stdio.h>

int main()
{
    int i, sum;
    char b[50];
    printf("Enter your name: \n");
    scanf("%[^\n]s", b);
    for (i = 0; b[i] != NULL; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int l1, l2, i, j;
    char s1[20], s2[20];
    printf("Enter any two strings:\nString1:");
    scanf("%s", &s1);
    printf("String2: ");
    scanf("%s", &s2);

    // for lengths
    for (l1 = 0; s1[l1] != NULL; l1++)
        continue;
    for (l2 = 0; s2[l2] != NULL; l2++)
        continue;

    for (i = l1, j = 0; i < (l1 + l2); i++, j++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("%s", s1);
    return 0;
}
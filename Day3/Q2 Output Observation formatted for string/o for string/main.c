#include <stdio.h>

int main()
{
    char a[20]; // the ammount of characters is set as 20
    printf("Enter any string \n");
    scanf("%s", &a);
    gets(a);
    printf("The string is: ");

    printf("%s", a);
    // puts(a);
    return 0;
}
// Formatted and unformatted input
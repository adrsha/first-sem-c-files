#include <stdio.h>

int main()
{
    char ch;
    printf("Using scanf without a space: \n");
    scanf("%c", &ch);

    fflush(stdin);
    printf("Using scanf with a space: \n");
    scanf("%c", &ch);
    // printf("Using getcha: \n");
    // ch = getchar(); //: The character is:a (Enter needed and input is visible.  Takes only one character.)
    // ch = getche(); //: The character is:a (no need for entering. takes only 1 character)
    //  ch = getch(); // The character isnt seen.
    printf("\nThe character is:");
    putchar(ch);

    return 0;
}
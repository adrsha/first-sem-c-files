#include <stdio.h>
// #include <stdlib.h>

int main()
{
    FILE *p;
    char s[30];
    // p = fopen("newfile.txt", "w");
    // fputs("This is a new line", p);
    // fclose(p);

    p = fopen("newfile.txt", "r");
    fgets(s, 29, p);
    printf("%s", s);
    return 0;
}
// fputs("String", filepoointer)
// fgets(address of the string, max length of string, filepointer)
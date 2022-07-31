#include <stdio.h>

int main()
{

    // fputs("String", filepointer).
    // fgets(address of the string, max length of string, filepointer).
    fwrite(address of the variable, size of the variable, 1, file pointer);
    fread(address of the variable, size of the variable, 1, file pointer);
    char something[20] = "value";
    FILE *fp = fopen("filename.txt", "wb");
    fwrite(something, sizeof(something), 1, fp);
}
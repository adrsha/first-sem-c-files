#include <stdio.h>
//#include <conio.h>

int main()
{
    int a;
    float b;
    printf("Address of a= %x", &a);
    printf("\nAddress of b= %x", &b);
    printf("\nSize of a= %d", sizeof(a));
    printf("\nSize of b= %d", sizeof(b));
    return 0;
}
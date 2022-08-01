#include <stdio.h>

int main()
{
    int a = 123;
    printf("%d \n", a);
    printf("%10d\n", a);
    printf("%-10d\n", a);
    printf("%012d\n", a);

    float b = 123.543;
    printf("%f \n", b);
    printf("%12f\n", b);
    printf("%10.2f\n", b); // decimal means how many digits before decimal
    printf("%0.2f\n", b);
    printf("%-12.5f\n", b);
    return 0;
}

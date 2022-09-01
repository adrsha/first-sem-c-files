#include <stdio.h>

typedef struct feet_inch
{
    int f;
    int i;
} f_i;

int main()
{
    f_i f1, f2, sum;

    printf("Enter the dimension 1 in feet/inch:\nFeet: ");
    scanf("%d", &f1.f);
    printf("Inch: ");
    scanf("%d", &f1.i);

    printf("Enter the dimension 2 in feet/inch:\nFeet: ");
    scanf("%d", &f2.f);
    printf("Inch: ");
    scanf("%d", &f2.i);

    sum.i = (f1.i + f2.i) % 12;
    sum.f = f1.f + f2.f + (f1.i + f2.i) / 12;

    printf("The total sum of these dimensions is: %dfts %din.", sum.f, sum.i);

    return 0;
}
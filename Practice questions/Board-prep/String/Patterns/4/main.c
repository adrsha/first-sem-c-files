//       P
//      RO
//     GRA
//    MPRO
//   GRAMP
//  ROGRAM
// PROGRAM

#include <stdio.h>

int main()
{

    int i, j, r, k = 0;
    char a[20];
    printf("Enter your string: ");
    scanf("%s", a);
    printf("\nEnter number of rows: ");
    scanf("%d", &r);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", a[k]);
            k++;
            if (k > strlen(a) - 1)
            {
                k = 0;
            }
        }

        printf("\n");
    }
    return 0;
}
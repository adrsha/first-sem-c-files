// P R O G R A M
//  P R O G R A
//   P R O G R
//    P R O G
//     P R O
//      P R
//       P

#include <stdio.h>

int main()
{

    int i, j;
    char a[20];
    printf("Enter your string: ");
    scanf("%s", &a);

    for (i = strlen(a) - 1; i >= 0; i--)
    {
        for (j = strlen(a); j >= i; j--)
        {
            printf(" ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("%c ", a[j]);
        }

        printf("\n");
    }
    return 0;
}
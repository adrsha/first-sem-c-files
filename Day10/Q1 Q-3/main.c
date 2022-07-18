#include <stdio.h>
void main()
{
    int marks[5];
    int i;
    printf("%u", marks);
    printf("\naddress of different array elements: \n");
    for (i = 0; i < 5; i++)
    {
        // printf("address of element %d is %u\n",i,&marks[i]);
        printf("address of element %d is %u\n", i, (marks + i));
    }
}
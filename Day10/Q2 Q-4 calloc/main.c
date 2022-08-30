#include <stdio.h>
#include <stdlib.h> // header file for memory management functions
void main(void)
{
    int n, i;
    float *address;
    printf("Enter no of elements");
    scanf("%d", &n);
    address = (float *)calloc(n, sizeof(float));
    // using calloc function to allocate memory for n number of float member
    if (address == NULL) // to check whether the required memory is allocated of not
    {
        printf("Memory cannot be allocated. for arrays > 10^11\n");
        exit(1); // to exit the program if the contents of the address is null
    }
    for (i = 0; i < n; i++)
    {
        printf("\n Address of %dth block %d", i + 1, address + i);
    }

    free(address); // to deallocate memory
}
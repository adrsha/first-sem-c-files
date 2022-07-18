#include <stdio.h>
int findHighest(int, int, int);
int findLowest(int, int, int);
int main()
{
    int a, b, c;
    printf("Enter three numbers: \n= ");
    scanf("%d%d%d", &a, &b, &c);
    printf("highest = %d", findHighest(a, b, c));
    printf("\nlowest = %d", findLowest(a, b, c));
}

int findHighest(int x, int y, int z)
{
    int highest;
    // highest = (x > y) ? ((x > z) ? x : highest)
    //                   : ((y > z) ?: y);
    // highest = (z > y) ? ((z > y) ? z : highest)
    //                   : highest;
    highest = (x > y && x > z) ? x : ((y > z) ? y : z);
    return highest;
}
int findLowest(int x, int y, int z)
{
    int lowest;
    // lowest = (x > y) ? ((x > z) ? x : lowest)
    //                  : ((y > z) ?: y);
    // lowest = (z > y) ? ((z > y) ? z : lowest)
    //                  : lowest;
    lowest = (x < y && x < z) ? x : ((y < z) ? y : z);

    return lowest;
}
#include <stdio.h>
// since the range of a 4 bit data type is -2147483647 to 2147483648
// in turbo, range of int = -32768 to 32767
int main()
{
    int x = 2147483640, y = 9, z;
    z = x + y;
    printf("%d\n", sizeof(x));
    printf("%d", z);
    return 0;
}

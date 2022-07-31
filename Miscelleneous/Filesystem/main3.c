#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    f = fopen("Demo.txt", "wb");
    char var[20] = "abcd";
    // fputs(var,f);
    fwrite(var,sizeof(var)-1,1, f);
}
//fwrite( address, size of the var, 1, filepointer)
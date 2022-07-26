#include <stdio.h>
#include <stdlib.h>

int largest(int [],int);

int main(){
    int a[5],i;
    
    printf("Enter your numbers:\n");
    for (i=0; i<5; i++){
        printf("For %dth value: ",i);
        scanf("%d", &a[i]);
    }
    printf("The largest number is: %d", largest(a,5));
}
int largest(int a[],int l){
    int i,larg;
    larg = a[0];
    for (i=0;i<l;i++){
        if (a[i]>larg){
            larg = a[i];
        }
    }
    return larg;
}
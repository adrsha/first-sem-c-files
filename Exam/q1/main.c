#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,f=0,n1,n2;

    printf("Enter n1 and n2.");
    scanf("%d%d", &n1, &n2);

    if(n1>=n2){
        printf("Please enter n1 and n2 such that n1<n2.");
        exit(1);
    }
    printf("The even numbers between %d and %d are:", n1, n2);
    for (i=n1; i<=n2; i++){
        if (i%2==0){
            f++;
            printf("\n%d", i);
        }
    }
    printf("\n The number of even numbers are: %d\n", f);


    return 0;
}
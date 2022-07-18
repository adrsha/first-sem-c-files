//WAP to input any 1D array using pointer notation and display its elements using pointer notation too
#include <stdio.h>
void main(){
    int marks[5];
    int i;
    int a;
    for(i=0; i<5; i++){
        printf("Value of element %d is : ",i);
        scanf("%d", marks+i);
    }
    for(i=0; i<5; i++){
        printf("\n Hence, the value of element %d is : ",i);
        printf("%d", *(marks+i));
    }
    
}
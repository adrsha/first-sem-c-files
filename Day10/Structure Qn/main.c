#include <stdio.h>

int main(){

    struct Human{
        char name[20];
        int phoneNo;
        
        struct Family{
            char dad[30];
            char mom[30];
        } f;
    } h;

    printf("Enter Your Name:\n");
    scanf("%s", h.name);
    printf("Enter Your Dad's name:\n");
    scanf("%s", h.f.dad);
    printf("Enter Your Mom's name:\n");
    scanf("%s", h.f.mom);
    printf("Enter Your phoneno:\n");
    scanf("%d", &h.phoneNo);

    printf("Hi %s. You phone number happens to be %d doesnt it. Tell hi to your mom, %s and your dad, %s from me. ", h.name, h.phoneNo, h.f.mom, h.f.dad);
    
    return 0;
}
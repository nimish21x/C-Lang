#include <stdio.h>

struct employee{
    int code; // This defines a new user defined data type
    float salary;
    char name[10];
};

int main(){
    
    struct employee e1;
    e1.code = 21;
    struct employee *ptr;
    ptr = &e1;
    // now we can print structure using:
    // print("%d", (*ptr).code);
    printf("%d", ptr->code); //exactky same as (*ptr).code
    
    return 0;
}
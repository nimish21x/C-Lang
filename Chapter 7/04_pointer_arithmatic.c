#include <stdio.h>

int main(){
   /* 
   
     // POINTER ARITHMATIC USING INTEGER POINTER 
    int a = 10;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);  

    // POINTER ARITHMATIC USING CHARACTER POINTER 
    char b = 'A';
    char *ptrr = &b;
    printf("\nThe address of a is %u\n", &b);
    printf("The address of a is %u\n", ptrr);
    ptrr++;
    printf("The value of ptr is %u\n", ptrr);  

   
   */ 

   // POINTER ARITHMATIC USING INTEGER POINTER 
    int a = 10;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr = ptr - 2; // opr on pointer works in bytes subtracting 2 will subtract 8 butes as int value has 4 bytes 
    // similarly for a char data type 1 byte will be operated 
    printf("The value of ptr is %u\n", ptr);  



    return 0;
}
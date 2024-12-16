#include <stdio.h>

int main(){
    int a = 25, b = 7, c = a + b;
    printf("The value of a is %d, b is %d and their sum is %d", a, b, c);

    printf("\nThe remainder when a is divided by b is %d", a%b);
    // modulus operator "%" is used to find the remainder 
    
    return 0;
}
// This cannot be used to find exponentiation in C 
// int d = a^b;  (doesn't implies power) 
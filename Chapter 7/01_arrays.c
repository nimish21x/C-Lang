#include <stdio.h>

int main(){
    
    int A[90]; // Resere space to store 90 integer values

    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    // We can go all the way till A[89]

    printf("The value of first three values of arrays are %d %d %d", A[0], A[1], A[2]);

    return 0;
}
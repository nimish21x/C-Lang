#include <stdio.h>

int main(){
    
    int A[] = {33, 44, 55, 66};

    //int* ptr = &A[0];
    int* ptr = A; 

    for (int i = 0; i < 4; i++){
        // printf ("The value of A[] at index %d is %d\n", i, A[i]); {USUAL WAY OF RETRIEVING ARRAY}
        printf("The value of A[] at index %d is %d\n", i, *ptr);
        *ptr++;
    }

    return 0;
}
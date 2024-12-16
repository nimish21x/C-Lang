#include <stdio.h>

int main(){
    
    int A[5];

    printf("Enter The array;\n");

    for(int i = 0; i < 5; i++){
        scanf ("%d", &A[i]);
    }
    
    for (int i = 0; i<5 ; i++){
        printf("The address of Array 'A' at %d is %u\n", i, &A[i]); 
    }
    return 0;
}

// The result shows that address of each element of array is after every 4 bytes (int datatype)
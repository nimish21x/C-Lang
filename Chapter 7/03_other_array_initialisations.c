#include <stdio.h>

int main(){

    int A[4] = {2,3,4,5};

    for (int i = 0; i < 4; i++){
        printf("The value of array at index %d is %d\n", i, A[i]);
    }

    return 0;
}
#include <stdio.h>

int main(){
    
    int A[10], i, N;
    printf("Enter the value of N:\n");
    scanf("%d", &N);

    for (i=0; i<N; i++){
        A[i] = N * (i+1);
    }

    for (i = 0; i<10; i++){
        printf("The value of %d X %d is %d\n", N, i+1 , A[i]);
    }
    return 0;
}
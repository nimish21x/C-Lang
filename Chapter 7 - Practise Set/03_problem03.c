//Write a program to create an array of 10 integers and store multiplication table of 
//5 in it.

#include <stdio.h>

int main(){
    
    int A[10];

    for (int i = 0; i<10; i++){
        A[i] = 5*(i+1);
    }

    for (int i = 0; i<10; i++){
        printf("The value of 5 X %d is %d \n", i, A[i]);
    }

    return 0;
}
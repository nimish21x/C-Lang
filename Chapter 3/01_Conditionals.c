#include <stdio.h>

int main(){
    int marks = 90;

    if (marks>89){

        printf("We are inside If Function\n");
        printf("marks are greater than 90\n");
    }

    if (marks>95){

        printf("We are inside another If Function\n");
        printf("marks are greater than 95\n");
    }

    if (marks%5==0){
        printf("Marks are divisible by 5");
    }
    return 0;
}
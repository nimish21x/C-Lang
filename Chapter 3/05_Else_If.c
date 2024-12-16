#include <stdio.h>

int main(){
        int age = 25;

        if(age>60){
            printf("You can drive and you are a senior citizen\n");
        }

        else if (age>18){
            printf("You can drive\n");
        }

        else {
            printf("You are underage and you cannot drive\n");
        }
        
    return 0;
}
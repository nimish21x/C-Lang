#include <stdio.h>

int main(){
    //int a = 9;
    //int b = 2;
    //float c = a/b;
    //This will not give correct answer because float is taken not integer
    float a = 9.0;
    int b = 2;
    float c = a/b;
    printf("The division is %f", c);
    return 0;
}
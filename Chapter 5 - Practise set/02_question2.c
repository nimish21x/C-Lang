// Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

float c2f (int);

float c2f (int c){
    return ((9*c)/5)+32;
}

int main(){

printf("The value of 0 degree celcius in farenhiet is %f", c2f (0));

    return 0;
}
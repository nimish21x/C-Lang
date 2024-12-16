#include <stdio.h>

int sum (int, int);

int sum (int a, int b){
    return a + b;}


int main(){
    
    int x = 2, y = 9;
    printf("The Sum of x and y is %d", sum (x,y));

    return 0;
}
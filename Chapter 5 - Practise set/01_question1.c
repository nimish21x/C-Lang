// Write a program using function to find average of three numbers. 

#include <stdio.h>
float average (int, int, int);

float average (int x, int y, int z){
    return (x+y+z)/3;
}
int main(){
    


printf("The average of 2, 3 and 4 is %f", average (2,3,4));

    return 0;
}

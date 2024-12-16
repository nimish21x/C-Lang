#include <stdio.h>

int main(){
    
    int a = 1;
    int b = 1;

    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    int c = 2;
    int d = 0;
    printf("The value of c and d is %d\n", c&&d);    
    printf("The value of c or d is %d\n", c||d);

    if(a&&b){
        printf("Both are true\n");
    }

    //is same as writing,
    if(a){
        if(b){
            printf("Both are true\n");
        }
    };
    return 0;
}
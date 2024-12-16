#include <stdio.h>

int main(){
    if(1){
        printf("This if is executed\n");
    }

    if(3452){
        printf("This if is also executed\n");
    }

    if(0){
        printf("This if is also executed\n");
    }
    else{
        printf("This is a zero value and this is not executed");
    }
    return 0;
}
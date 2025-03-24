/*Modify the program 01 to check whether the file exists or not before 
opening the file.*/

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen ("nimish2.txt", "r");

    if (ptr == NULL){
        printf("Sorry! The file does not exist\n");
    }
    else{
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fclose(ptr);
    }
    return 0;
}
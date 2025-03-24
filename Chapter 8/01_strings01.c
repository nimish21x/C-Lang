#include <stdio.h>

int main(){
    char Ch[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    char Ch1[] = "abcde"; // Another way of creating a String and this doesnot require to write null character at the end of the string
    // Printing a String using Loop 
    for (int i = 0; i <= 5; i++){
        printf("The character at Ch[%d] is %c\n", i, Ch[i]);
    }
    for (int i = 0; i <= 5; i++){
        printf("The character at Ch1[%d] is %c\n", i, Ch1[i]);
    }
    return 0;
}
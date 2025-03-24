/*Write a program to read a text file character by character and write its content 
twice in separate file.*/
#include <stdio.h>

int main(){
    char ch;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("nimish.txt", "r");
    ptr2 = fopen("nimish2.txt", "a");

    while (2){
        ch = fgetc(ptr);
        // When all the content of a file has been break 
        if (ch == EOF ){
            break;
        }

        else {
            fprintf(ptr2 , "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
    return 0;
}
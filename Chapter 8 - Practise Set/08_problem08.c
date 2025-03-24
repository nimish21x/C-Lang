/*Write a program to count the occurrence of a given character in a string.*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[100] ;
    char c; // character to be searched
    int N = 0;
    gets (str);
    puts (str);
    printf("Enter the character to be searched\n");
    scanf("%c", &c);
    for (int i = 0; i < strlen (str); i++){
        if (str [i] == c ){
            N++;
        }
    }
    printf("\nThe character occurs %d times", N);
    return 0;
}

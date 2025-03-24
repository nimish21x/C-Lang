/*Write your own version of strlen function from <string.h>*/
#include <stdio.h> 
#include <string.h>

void StringLength(char A[]){
    int l = 0, i = 0;
    char c;
    c = A[i];
     while(c!='\0'){
        c = A[i];
        i++;
    } 
    l = i-1;
    printf("The length of passed String is %d", l);
}

int main (){
    char str[10];
    gets (str); 
    puts (str);
    StringLength(str);
}

/*
copilot;;;
#include <stdio.h>
#include <string.h>

void StringLength(char A[]) {
    int l = 0, i = 0; // Initialize i to 0
    char c = A[i];
    while (c != '\0') {
        c = A[i];
        i++;
    }
    l = i - 1;
    printf("The length of the passed string is %d\n", l);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove the trailing newline character if present
    str[strcspn(str, "\n")] = '\0';
    puts(str);
    StringLength(str);
    return 0;
}

*/
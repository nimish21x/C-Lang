#include <stdio.h>

int main(){
    // Gets is used to insert multiword characters in String
    char Ch[5] ;
    char st [5] = "ABCD";
    gets (Ch); //fgets is often used to tackle buffer overflow problems while using gets
    puts (Ch); //Works as printf but shifts to next line foor other statement ie includes \n in a way
    printf("%s", st); 
    return 0;
}
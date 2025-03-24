/*Write a program to encrypt a string by adding 1 to the ascii value of its characters.*/
#include <stdio.h> 
#include <string.h>

int main()
{
    char String [] = "My name is Nimish Sharma";
    for (int i = 0; i < strlen (String) ; i++){
        String [i] += 1;
    }
    puts (String);

return 0;
}
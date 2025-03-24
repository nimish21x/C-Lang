/*Write a program to decrypt the string encrypted using encrypt function in problem 6.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char string [] = "Nz!obnf!jt!Ojnjti!Tibsnb";
    for (int i = 0; i < strlen(string) ; i++){
        string [i] -= 1;
    }
    printf ("%s", string);
return 0;
}

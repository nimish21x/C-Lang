/*Write a program to check whether a given character is present in a string or not.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char c;        // character to be searched
    int found = 0; // flag to check if character is found
    gets(str);
    puts(str);
    printf("Enter the character to be searched\n");
    scanf("%c", &c);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("The Character is present");
    }
    else
    {
        printf("The Character is NOT present");
    }
}
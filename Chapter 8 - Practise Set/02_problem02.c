/*Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char St1[7], St2[7];
    printf("Enter the content of String 1\n");
    for (int i = 0; i < 6; i++)
    {
        scanf(" %c", &St1[i]);
        fflush(stdin); 
        /*While using %c for entering string ENTER (new line character) is also counted as an element.
           Therefore it is used to flush the new line character */
    }
    St1[6] = '\0'; // Ensure the string is null-terminated
    puts(St1);

    printf("Enter the Content of String 2\n");
    scanf("%6s", St2); // Limit the input size to avoid overflow

    int a = strcmp(St1, St2);
    printf("%d", a);

    return 0;
}

#include <stdio.h>
#include <string.h>
int main(){
    char Ch[10] = "Hello ";
    char Ch1[10] = "Nimish ";
    char Ch2[10] = "Sharma ";
    char Ch3[10];
    printf("The length of String Ch, Ch1, Ch2 is %d, %d, %d\n", strlen(Ch), strlen(Ch1), strlen(Ch2));
    strcpy(Ch3, Ch); //The String to have be copied content should be written first 
    printf("We have copied content of Ch in Ch3 ie %s\n", Ch3);
    strcat(Ch, Ch1); // Ch1's content copied to Ch
    printf("We have concatenated content of Ch1 in Ch ie %s\n", Ch);
    int a = strcmp("deep", "joke"); // DJ is negative. Strcmp is used to compare two string using ASCII values
    printf("%d", a);

    return 0;
}
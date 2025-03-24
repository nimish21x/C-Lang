#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen ("nimish.txt", "w");
   /*
    char c = fgetc(ptr);
    printf("%c", c);
   */
   fputc ('S', ptr);
   return 0;
}
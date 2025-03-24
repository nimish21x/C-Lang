#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen ("nimish.txt", "w"); // write mode first empties the file and then writes.
    int num = 21;
    /*
    fptr = fopen("harry.txt", "a");
    append mode adds up in the existing file 
    */
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}


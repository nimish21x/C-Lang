#include <stdio.h>

int main(){
    
     int i;
     printf("The address of i is %p", &i);
     printf("\nThe address of i in unsigned int is %u", &i);

     int* j = &i; // j is a pointer pointing to i 
     printf("\nThe address of i is %p", &i);
     printf("\nThe address of i is %p", &j);

     printf("\nThe value of address of j is %d", *j);
     printf("\nThe value of address of j is %d", *(&i));

    return 0;
}
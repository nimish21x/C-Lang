/*

int a = 10; 
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11"); 

*/

// I am 11 because single = is used and its used for assigning the value, == should have been used. 
 
 
 #include <stdio.h>
 
 int main(){
    int a = 10; 
    if (a == 11) 
    printf("I am 11"); 
    else  
    printf("I am not 11"); 
    return 0;
 }

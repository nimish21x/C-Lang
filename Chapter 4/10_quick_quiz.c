#include <stdio.h>

int main(){
    
int i = 0, n;
printf("Enter the value of n:\n");
scanf("%d", &n);

for (i=0;n>=i;i++){
    printf("The value of i is %d\n", i);
}

    return 0;
}
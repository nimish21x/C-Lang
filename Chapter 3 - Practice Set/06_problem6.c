//Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main(){
    int a; int b; int c; int d;
    printf ("Enter First Digit:\n");
    scanf("%d", &a);
    printf("Enter Second Digit:\n");
    scanf("%d", &b);
    printf("Enter Third Digit:\n");
    scanf("%d", &c);
    printf("Enter fourth digit:\n");
    scanf("%d", &d);

    if (a>b && a>c && a>d){
        printf("The biggest number among all entered numbers is %d", a);
    }
    else if (b>a && b>c && b>d){
        printf("The biggest number among all entered numbers is %d", b);
    }
    else  if (c>b && c>a && c>d){
        printf("The biggest number among all entered numbers is %d", c);
    }
    else if (d>b && d>c && d>a){
        printf("The biggest number among all entered numbers is %d", d);
    }
    return 0;
}
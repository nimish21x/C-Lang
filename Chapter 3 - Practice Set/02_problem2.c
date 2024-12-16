/* Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. */

#include <stdio.h>

int main(){
    
    float Maths;
    float Science;
    float English;
    printf("Enter Marks obtained in Maths\n");
    scanf("%f", &Maths);
    printf("Enter Marks obtained in Science\n");
    scanf("%f", &Science);
    printf("Enter Marks obtained in English\n");
    scanf("%f", &English);
    printf("The Marks in Maths, Science and English are %f, %f and %f\n", Maths, Science, English);

    if(Maths>=33.00){
        printf("Pass in Maths\n");
    }
        else {
            printf("Fail in Maths\n");
        }
        

    if(Science>=33.00){
        printf("Pass in Science\n");
    }
        else {
            printf("Fail in Science\n");
        }
        

    if(English>=33.00){
        printf("Pass in English\n");
    }
        else {
            printf("Fail in English\n");
        }

    if(Maths + Science + English/3 >= 40){
        printf("You have passed in all subjects");
    } 
    else {
        printf("You are failed because you have less marks in overall subjects");
    }

    return 0;
}
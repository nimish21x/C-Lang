/*Write a program to illustrate the use of arrow operator → in*/
#include <stdio.h>

typedef struct emp{
    int salary;
    float score;
} Employee;

int main(){
    Employee e1;
    Employee* ptr = &e1;
    (*ptr).salary = 56;
    (*ptr).score = 45.3;

    //ptr->salary = 56;
    // ptr->score = 45.6;

    printf("Thr value of salary is %d and the value of score is %f", ptr->salary, ptr->score);

    return 0;
    
}
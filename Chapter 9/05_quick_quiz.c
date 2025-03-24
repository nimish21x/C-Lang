/*
PASSING STRUCTURE TO A FUNCTION 
A structure can be passed to a function just like any other data type. 
void show(struct employee e); // function prototype
Quick Quiz: Complete this show function to display the content of employee.
*/
#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show (struct employee e);

void show (struct employee e){
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}

int main(){
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Nimish");
    e1.salary = 54.44;
    show(e1);
    
    return 0;
}
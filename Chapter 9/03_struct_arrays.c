#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    
    struct employee facebook[100]; //ARRAY OF STRUCTURES
    // WE CAN ACCESS THE DATA USING
    facebook[0].code = 100;
    facebook[1].code = 77;
    struct employee nimish = {100, 71.22, "nimish"};
    printf("%d %f %s", nimish.code, nimish.salary, nimish.name);
    return 0;
}
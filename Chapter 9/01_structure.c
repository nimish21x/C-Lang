#include <stdio.h>
#include <string.h>

struct comp{
    char empname[10];
    int empid;
    int empsalary;
};

int main(){
    struct comp e1, e2;
    strcpy(e1.empname, "Rajat");
    e1.empid = 2100;
    e1.empsalary = 168000;
    printf("%s %d %d", e1.empname, e1.empid, e1.empsalary);
    return 0;
}
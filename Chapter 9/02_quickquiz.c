/*Write a program to store the details of 3 employees from user defined data. Use the structure declared above.*/
#include <stdio.h>
#include <string.h>

struct comp{
    char empname[100];
    int empid;
    int empsalary;
};

int main(){
    struct comp e1, e2, e3;
    
    printf ("Enter the value of empname for e1\n");
    scanf("%s", e1.empname);

    printf ("Enter the value of empid for e1\n");
    scanf("%d", &e1.empid);

    printf ("Enter the value of empsalary for e1\n");
    scanf("%d", &e1.empsalary);

    printf("%s %d %d\n", e1.empname, e1.empid, e1.empsalary);

    printf ("Enter the value of empname for e2\n");
    scanf("%s", e2.empname);

    printf ("Enter the value of empid for e2\n");
    scanf("%d", &e2.empid);

    printf ("Enter the value of empsalary for e2\n");
    scanf("%d", &e2.empsalary);

    printf("%s %d %d\n", e2.empname, e2.empid, e2.empsalary);
 
     printf ("Enter the value of empname for e3\n");
    scanf("%s", e3.empname);

    printf ("Enter the value of empid for e3\n");
    scanf("%d", &e3.empid);

    printf ("Enter the value of empsalary for e3\n");
    scanf("%d", &e3.empsalary);

    printf("%s %d %d\n", e3.empname, e3.empid, e3.empsalary);

    return 0;
}
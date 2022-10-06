#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];

}emp;

void show(emp emp1){
    printf("The code of the employee is : %d\n",emp1.code);
    printf("The salary of the employee is : %f\n",emp1.salary);
    printf("The name of the employee is : %s\n",emp1.name);
}

int main(){
    // declaring e1 and ptr
    emp e1;
    emp *ptr;

    // pointing ptr to e1
    ptr = &e1;
    // set the member values for e1
    ptr->code = 100;
    ptr->salary = 101.34;
    strcpy(ptr->name,"Yash");

    show(e1);
return 0;
}
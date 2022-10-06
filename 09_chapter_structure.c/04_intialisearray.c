// Another way of initialising the string

#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee yash = {10,23.45,"yash"};
    printf("code is : %d\n",yash.code);
    printf("salary is : %f\n",yash.salary);
    printf("name is : %s\n",yash.name);

return 0;
}
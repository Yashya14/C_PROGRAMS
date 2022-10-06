// A program to print the adress of of a variable .use this adress to get the value of this variable ..

#include<stdio.h>
int main(){
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("The value of variable a is %d\n",a);
    printf("The adresss of a variable a is %u\n",ptr);
    printf("The value of variable a is %d\n",*ptr);

return 0;
}
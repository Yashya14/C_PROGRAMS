// A program having a variable i ,print the adress of i . pass the variable to the function and prints its adress .

#include<stdio.h>
void printAdd(int a){
    printf("The address of variable a is %u\n ",&a);
}
int main(){
    int i = 5;
    printf("The value of variable i is %d\n",i);
    printAdd(i);
    printf("The address of a variable i is %u\n",&i);

return 0;
}
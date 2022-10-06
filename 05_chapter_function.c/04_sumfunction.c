// sum is a function which takes a and b as input and gives an integer output 

#include<stdio.h>
int sum(int a, int b);

int main(){
    int c;
    c = sum(2, 13);
    printf("The sum of c is %d\n",c);

return 0;
}

int sum(int a, int b){
    int c;
    c = a + b;
    return c;
}
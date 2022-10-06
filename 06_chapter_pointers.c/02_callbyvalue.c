// A fuction is call by value  

#include<stdio.h>
int sum(int a ,int b);

int main(){
    int x = 4, y = 6;
    printf("The value of x and y is %d and %d\n",x,y);
    printf("The sum of 4+6 is %d\n",sum(x,y));
    printf("The value of x and y after function call is %d and %d\n",x,y);

return 0;
}

int sum(int a ,int b){
    int c;
    c = a + b;
    a = 10;
    b = 20;
return c;
}
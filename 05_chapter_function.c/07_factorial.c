// program to find a factorial of number using a function 

#include<stdio.h>
int factorial(int x);

int main(){
    int a;
    // int a = 5;
    printf("Enter the value  of a \n");
    scanf("%d",&a);
    printf("The value of factorial %d is %d \n",a ,factorial(a));

return 0;
}

int factorial(int x){
    printf("Calling function (%d)\n",x);
    if(x == 1 || x == 0){
        return 1;
    }else{
        return x * factorial(x-1);
    }
}
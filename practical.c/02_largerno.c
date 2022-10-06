// Program to find the largest number between two numbers .

#include<stdio.h>

int main(){
    int a , b;
    printf("Enter the value of a :");
    scanf("%d",&a);

    printf("Enter the value of b :");
    scanf("%d",&b);

    if(a>b){
        printf("A is greater\n");
    }else{
        printf("B is greater\n");
    }

return 0;
}
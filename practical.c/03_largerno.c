// Program to find the largest number between three numbers .

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a b and c :");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("A is greater \n");
        }else{
            printf("C is greater \n");
        }
    }else{
        if(b>c){
            printf("B is greater \n");
        }else{
            printf("C is greater \n");
        }
    }

return 0;
}
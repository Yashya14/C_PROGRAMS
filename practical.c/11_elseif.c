// Program of else if statement 

#include<stdio.h>
int main(){
    int a , b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);

    if(a==b){
        printf("Both have same values \n");
    }else if(a>b){
        printf("a is greater than b");
    }else if(a<b){
        printf("a is less than b");
    }
    else{
        printf("Both have differnt values ");
    }
    
return 0;
}
// Program on switch statement --> case ,break and switch

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number between (1-7) : ");
    scanf("%d",&num);
    
    switch(num){
        case 1 : 
        printf("Today is monday");
        break;
        case 2 : 
        printf("Today is tuesday");
        break;
        case 3 : 
        printf("Today is wednesday");
        break;
        case 4 : 
        printf("Today is thursday");
        break;
        case 5 : 
        printf("Today is friday");
        break;
        case 6 : 
        printf("Today is saturday");
        break;
        case 7 : 
        printf("Today is sunday");
        break;
        defalut: 
        printf("Enter the proper number 1-7 ");
    }
return 0;
}
#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    int num2;

    ptr = fopen("yash.txt","r");
    if(ptr == NULL){
        printf("This file does not exits\n");
    }
    else{
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);

    printf("The value of num is %d\n",num); 
    printf("The value of num2 is %d\n",num2);
    }
return 0;
}
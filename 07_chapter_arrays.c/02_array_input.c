#include<stdio.h>
int main(){
    int marks[4];
   
    printf("Enter the value of a is : \n");
    scanf("%d",&marks[0]);

    printf("Enter the value of b is : \n");
    scanf("%d",&marks[1]);

    printf("Enter the value of c is : \n");
    scanf("%d",&marks[2]);

    printf("Enter the value of d is : \n");
    scanf("%d",&marks[3]);

    printf("You enterd %d %d %d %d ",marks[0],marks[1],marks[2],marks[3]);

return 0;
}
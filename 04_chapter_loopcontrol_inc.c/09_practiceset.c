// Multiplication table of any number by using a for loop , while , do-while   

#include<stdio.h>
int main(){
    // int i;
    // printf("*******Multiplication table of 10 ********\n\n");
    // for(i=1; i<=10; i++){
    // printf("10 x %d = %d\n",i,10*i);
    // }

    // int i = 1;
    // printf("*****Multiplication table of 8 ********\n\n");
    // while(i<=10){
    //     printf("8 x %d = %d\n",i,8*i);
    //     i++;
    // }

    int i = 1;
    printf("****Multiplication table of 9 ****\n\n");
    do{
        printf("9 x %d = %d\n",i,9*i);
        i++;
    }while(i<=10);

return 0;
}
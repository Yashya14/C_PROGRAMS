#include<stdio.h>
void swap_wrong(int a, int b);
void swap(int *a, int *b);

int main(){
    int x = 4, y = 6;
    printf("The value of x and y before swap is %d and %d\n",x,y);
    // swap(x,y); ---> this will call the value 

    swap(&x,&y); // ----> this will works call by refrence 
    printf("The value of x and y after the swap is %d and %d\n",x,y);

return 0;
}

void swap_wrong(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
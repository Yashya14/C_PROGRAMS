#include<stdio.h>
void change(int a);

int main(){
    int b = 140;
    printf("The value of b before the change is %d\n",b);
    change(b);
    printf("The value of b after the change is %d\n",b);

return 0;
}

void change(int b){
    b = 24;
}
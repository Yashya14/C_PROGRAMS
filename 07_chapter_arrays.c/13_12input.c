#include<stdio.h>
int main(){
    int mul[10];
    int num;
    
    printf("Enter the number \n");
    scanf("%d",&num);

    for(int i = 0; i<10; i++){
        mul[i] = num * (i+1);
    }

    for(int i = 0; i<10; i++){
        printf("num x %d = %d\n",i+1,mul[i]);
    }

return 0;
}
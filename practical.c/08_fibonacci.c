// Program for fibonacci series 

#include<stdio.h>
int main(){
    int n ,f, f1=2 ,f2=1;
    printf("Enter the range : \n");
    scanf("%d",&n);

    do{
        f = f1+f2;
        f1 = f2;
        f2 = f ;
        printf("%d \t",f);
        n--;
    }while(n>0);
    
return 0;
}
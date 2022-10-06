// Progran to reverse the number 

#include<stdio.h>
int main(){
    int rev = 0,remainder;
    unsigned int n;

    printf("Enter any number :");
    scanf("%d",n);

    while(n!=0){
        remainder = n%10;
        rev = rev*10+remainder;
        n = n/10;
        printf("Reverse number is : %d\n",rev);
    }

    

return 0;
}
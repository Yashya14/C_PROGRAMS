#include<stdio.h>
int main(){
    // Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers. 
    // Disclaimer: This is not the best method to solve this problem

    int n = 13, prime=1;
    for(int i=2;i<n;i++){
        if (n%i==0 ){
            prime = 0;
            break;
        }
    }
    if (prime==0){
        printf("This is not a prime number\n");
    }
    else{
        printf("This is a prime number\n");
    }
    
return 0;
}
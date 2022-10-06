// Calculate income tax paid by an employee to the government as per the sales mentioned below : 
// Income slab -----> Tax 
// 2.5L - 5.0L       5%
// 5.0L - 10.0L      20%
// Above 10.0 L      30%  ---> there is no tax less than 2.5L .Take income amount as an input from user .

#include<stdio.h>
int main(){
    float income , tax = 0;
    printf("Enter your income\n");
    scanf("%f",&income);

    if(income >= 250000 && income <= 500000){
        tax = tax + 0.05 *(income - 250000);
    }
    if(income >=500000 && income <= 1000000){
        tax = tax + 0.20 *(income - 500000);
    }
    if(income >= 1000000){
        tax = tax + 0.30 *(income - 10000000);
    }
    printf("Your net income tax to be paided by 14th of this month is %f",tax);

return 0;
}
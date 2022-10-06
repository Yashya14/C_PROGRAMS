// Program to find the sum of natural numbers 

#include<stdio.h>
int main(){
    static int n, count, sum;
    printf("Enter the number of items : ");
    scanf("%d",&n);

    for(count=1;count<=n;count++){
        sum = sum + count;
    }
    printf("The sum of natural numbers is %d\n ",sum);

return 0;
}
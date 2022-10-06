// Program to find a factorial of any  number ----> factorail (3) = 3 * 2 * 1 = 6

#include<stdio.h>
int main(){
    int i = 0, n = 8, factorial = 1;
    for(i=1;i<=n;i++){
        factorial *=i;
    }
    printf(" The factorial of %d is %d\n",i,factorial);

    // int i = 0;
    // int num,factorial = 1;
    // printf("Enter the number\n");
    // scanf("%d",&num);

    //  for(i=1;i<=num;i++){
    //     factorial *=i;
    // }
    // printf(" The factorial of %d is %d\n",i,factorial);



return 0;  
} 
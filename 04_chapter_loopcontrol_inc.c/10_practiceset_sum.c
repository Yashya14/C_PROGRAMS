// Sum of 1 to 10 numbers 

#include<stdio.h>
int main(){
    int i = 1, sum = 0, n = 10;

    // for(i=1;i<=n;i++){
    //     sum +=i;
    // }
    
    while(i<=n){
        sum +=i;
        i++;
    }
    printf("The sum of (1 to 1o) is %d\n",sum);

return 0;
}
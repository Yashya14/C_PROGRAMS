#include<stdio.h>
#include<math.h>
int main(){
    int a = 4;
    int b = 8;

    printf("The value of a+b is :%d\n",a+b);
    printf("The value of a-b is :%d\n",a-b);
    printf("The value of a*b is :%d\n",a*b);
    printf("The value of a/b is :%d\n",a/b);

    int z ;
    z = b*a; // this is legal
    // b*a = z --> this is lllegal
    printf("The value of z is %d\n",z);

    printf("5 when divided by 2 gives a remainder of %d\n",5%2);
    printf("5 when divided by -2 gives a remainder of %d\n",5%-2);
    printf("-5 when divided by 2 gives a remainder of %d\n",-5%2);

    // NO operator is assumed to be prsent
    // printf("The value of 4 * 5 is %d\n",(4)(5)); --> will not return 20
    printf("The value of 4 * 5 is %d\n",(4)*(5));

    // There is no operator is to peerform exponentional in c 
    printf("The value of 4 ^ 5 is %d\n",4^5); // wrong --> not produe 4 to the power 5
    printf("The value of 4 to the power 5 is %f\n",pow(4,5));

    printf("The value of 4 + 5 is %d\n",4+5);
    printf("The value of 4.5 + 2 is %f\n",4.5+2);
    printf("The value of 4.4 + 5.6 is %d\n",4.4+5.6);
    printf("The value of 4.5 / 2 is %f\n",4.5/2);
    
return 0;
}
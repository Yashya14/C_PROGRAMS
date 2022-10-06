// pointer basic ---> pointer is the variable which stores the adress 0f another variable 

#include<stdio.h>
int main(){
    int i = 40;
    int *j = &i;

    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The address of i is %u\n",&i);
    printf("The address of i is %u\n",j);
    printf("The adress of j is %u\n ",&j);
    printf("The value of j is %d\n",*(&j));

return 0;
}
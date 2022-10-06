// strlen --> this is to count the length of string  

#include<stdio.h>
#include<string.h>
int main(){
    char *st  = "Yash";
    // char st[10] = "Yash";
    int a = strlen(st);
    printf("The length of string st is %d\n",a);

return 0;
}
#include<stdio.h>
#include<string.h>

int main(){
char st1[10] = "Hello";
// char *st1 = "Hello";
char *st2 = "Yash";
strcat(st1,st2);
printf("Now the st1 is %s \n",st1);

return 0;
}
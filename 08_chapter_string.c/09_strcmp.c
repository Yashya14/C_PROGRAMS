#include<stdio.h>
#include<string.h>

int main(){
    char st1[20] = "Hello";
    char st2[10] = "Hell";
    // char *st1 = "Hello";
    // char *st2 = "Hell";
    int value = strcmp(st1,st2);
    printf("Now the value is %d\n",value);

return 0;
}
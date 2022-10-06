#include<stdio.h>
int main(){
    // char str[] = "yash";
    char str[] = {'y','a','s','h','\0'};
    char *ptr = str;
    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;

    }

return 0;
}
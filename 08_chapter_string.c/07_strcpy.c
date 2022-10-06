// strcpy ---> It is used to copy one string to another string 

#include<stdio.h>
#include<string.h>
int main(){
    char *st = "Yash"; 
    // char st[20] = "Yash";
    char st2[20];
    strcpy(st2,st);
    printf("Now the st2 is %s",st2);

return 0;
}
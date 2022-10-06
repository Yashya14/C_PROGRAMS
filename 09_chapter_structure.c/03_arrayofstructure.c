#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[0].salary = 100.34;
    strcpy(facebook[0].name,"Yash");

    facebook[1].code = 101;
    facebook[1].salary = 56.678;
    strcpy(facebook[1].name,"Ramu");

    facebook[2].code = 102;
    facebook[2].salary = 23.456;
    strcpy(facebook[2].name,"Chandu");
    printf("Done\n");

return 0;
}
#include<stdio.h>
void display(); // ----> Function prototype

int main(){
    int a;
    printf("Initialising display function\n");
    display(); // -----> Function call
    printf("Display function finished work\n");

return 0;
}
void display(){
    printf("This is dispaly\n");
}
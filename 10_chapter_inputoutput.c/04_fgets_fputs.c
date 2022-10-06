#include<stdio.h>
int main(){
    FILE *ptr;
    // fgetc code for readding a file  getcode.txt
    // ptr = fopen("getcode.txt","r");
    // char c = fgetc(ptr);

    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));
    // printf("The value of my character is %c\n",fgetc(ptr));

    ptr = fopen("putccode.txt","w");
    putc('y',ptr);
    putc('a',ptr);
    putc('s',ptr);
    putc('h',ptr);
    
    fclose(ptr);

return 0;
}
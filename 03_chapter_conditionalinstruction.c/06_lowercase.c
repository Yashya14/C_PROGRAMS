// Program to determine whether a character enterd by the user is lowercase or not .

#include<stdio.h>
int main(){
    // 97-122 ---> ASCII Values 
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);

    if(ch <= 122 && ch >= 97){
        printf("It is lowercase\n");
    }
    else{
        printf("It is not lowecase\n");
    }
    
return 0;
}
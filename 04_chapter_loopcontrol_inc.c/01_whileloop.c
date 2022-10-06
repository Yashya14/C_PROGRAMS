#include<stdio.h>
int main(){
    int a ;
    // int a = 1;
    printf("Enter a\n");
    scanf("%d",&a);

    while(a<10){
        // a = 11;
        // while(a>10){----> This will lead to infinite loop ;
        printf("%d\n",a);
        a++;
    }
    return 0;
}

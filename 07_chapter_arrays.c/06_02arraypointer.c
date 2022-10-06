#include<stdio.h>
int main(){
    int num[] = {12,13,14,15,16,17};

    // for(int i = 0; i<=5; i++){
    //     printf("\nElements = %d ",num[i]);
    //     printf("Address = %u ",&num[i]);

    // }

    for(int i = 0; i<=5; i++){
        printf("\nAddress = %u ",&num[i]);
        printf("Elements = %d ",num[i]);

    }


return 0;
}
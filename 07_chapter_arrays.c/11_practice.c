// Create an array of 10 numbers .verify using pointer arithematic that (ptr+2) points to the third elements where ptr 
// is  pointer pointing to the first element of the array 

#include<stdio.h>
int main(){
    int arr[10];
    // int ptr = &arr[0];
    int *ptr = arr;
    ptr = ptr + 2;

    if(ptr == &arr[2]){
        printf("These points to the same location in memory \n");
    }
    else{
        printf("These do not points to the same location in memory \n");
    }
return 0;
}
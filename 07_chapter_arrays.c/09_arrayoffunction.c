#include<stdio.h>
void printArray(int ptr[], int n){
    for(int i = 0; i<n; i++){
        printf("The value of element %d is %d \n",i+1,ptr[i]);
        // ptr[2] = 200;
    }
    ptr[2] = 200;
}
int main(){
    int arr[] = {16,8,20,3,14,2,15};
    printArray(arr,7);
    printf("%d",arr[2]);

return 0;
}
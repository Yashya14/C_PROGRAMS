// A program using a function calculate the sum and average of two numbers .
// use pointers and print the value of sum and average


#include<stdio.h>
void SumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;

}
int main(){
    int i, j, sum;
    float avg;
    i = 4;
    j = 6;
    SumAndAvg(i , j, &sum , &avg);
    printf("The value of sum is %d \n",sum);
    printf("The value of avg is %.2f \n",avg);

return 0;
}
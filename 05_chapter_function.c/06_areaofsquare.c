// using the  library function calculate the area of square with side a 

#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter the side of square :\n");
    scanf("%d",&side);
    printf("The area of square is %f\n",pow(side,2));
return 0;
}
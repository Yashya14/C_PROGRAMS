// Program to find out whether a student is pass or fail ; if it requires total 40% and at least 33% in each subject 
// to pass . Assume 3 subjects and take marks as an input from the user .

#include<stdio.h>
int main(){
    int physics,chemistry,math;
    float total;

    printf("Enter physics marks\n");
    scanf("%d",&physics);

    printf("Enter chemistry marks\n");
    scanf("%d",&chemistry);

    printf("Enter math marks\n");
    scanf("%d",&math);

    total = (physics + chemistry + math)/3;

    if((total<40) || physics<33 || chemistry<33 || math<33){
        printf("Your total percrntage is %f and you are fail\n",total);
    }
    else{
        printf("Your total percentage is %f and you are pass\n",total);
    }

return 0;
}
#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main(){
    goodMorning();

return 0;
}

void goodMorning(){
    printf("Good Morning Yash\n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Afternoon Yash\n");
    goodNight();
}    

void goodNight(){
    printf("Good Night Yash\n");
}
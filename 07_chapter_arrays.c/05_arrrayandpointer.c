#include<stdio.h>
int main(){
    int i = 3, *x;
    float j = 2.4, *y;
    char k = 'Y', *z;

    printf("The value of i = %d \n",i);
    printf("The value of j = %f \n",j);
    printf("The value of k = %c \n",k);
    printf("\n");
    x = &i;
    y = &j;
    z = &k;

    printf("The Address of i = %u \n",x);
    printf("The Address of j = %u \n",y);
    printf("The Address of k = %u \n",z);
    printf("\n");
    x++;
    y++;
    z++;

    printf("The Original Address of i = %u \n",x);
    printf("The Original Address of j = %u \n",y);
    printf("The Original Address of k = %u \n",z);

return 0;
}
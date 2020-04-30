#include<stdio.h>

int main(void){
    int min,max,sum;

    scanf("%d %d",&max,&min);
    sum=(min+max)*(max-min+1)/2;
    printf("%dから%dの合計は%dだ\n",min,max,sum);
    return 0;
}
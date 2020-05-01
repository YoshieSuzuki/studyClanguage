#include<stdio.h>

int main(void){
    int a,b;

    scanf("%d %d",&a,&b);//aとbを読み込む
    if(a*b%2==0){//もしaとbの積を2で割ったあまりが0だったなら
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
    return 0;
}
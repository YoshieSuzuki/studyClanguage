#include<stdio.h>

int main(void){
    int drink,snack,ans;//飲み物とお菓子の料金用,答え用
    double tax;//消費税用

    drink=120;
    snack=180;
    tax=1.08;

    ans=1000-(int)(tax*(drink+snack*2));//(int)のいちは全体につけても大丈夫です。
    printf("%d\n",ans);//出力
    return 0;
}
#include<stdio.h>

int main(void){
    int min,max,sum;

    scanf("%d %d",&max,&min);//最大値と最小値を読み込む
    sum=(min+max)*(max-min+1)/2;//計算
    printf("%dから%dの合計は%dだ\n",min,max,sum);//出力
    return 0;
}
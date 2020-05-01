#include<stdio.h>

int main(void){
    int a,b,c;
    int i=0,cnt=0;

    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i<=b;i++){//aからbまでの数分繰り返す
        if(c%i==0){//もしcがiで割り切れるのであれば
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
#include<stdio.h>

int main(void){
    int a,b,c,x;
    int cnt;
    int i,j,k;

    scanf("%d %d %d %d",&a,&b,&c,&x);
    for(i=0;i<=a;i++){
        for(j=0;j<=b;j++){
            for(k=0;k<=c;k++){
                if(x==i*500+j*100+k*50){
                    cnt++;
                }
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}
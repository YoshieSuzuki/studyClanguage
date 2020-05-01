#include<stdio.h>

int main(void){
    int n,m;
    int  man=-1,old=-1,baby=-1;

    scanf("%d %d",&n,&m);
    if(n*2<=m && m<=n*4){
        old=n;
        man=0;
        baby=0;
        if(n*3>m){
            man=n*3-m;
            old-=man;
        }
        if(n*3<m){
            baby=m-n*3;
            old-=baby;
        }
    }
    printf("%d %d %d\n",man,old,baby);
    return 0;
}
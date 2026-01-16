#include <stdio.h>
#include "hamakou.h"

int main () {
    int n,m,m3=0,m5=0,m35=0;
    m = getint("input m:");
    n = getint("input n:");
    int i=m;
    while(i<=n){
        if(i!=0){
            if(i%15==0){
                m3=m3+1;
                m5=m5+1;
                m35=m35+1;
            }else if(i%3==0){
                m3=m3+1;
            }else if(i%5==0){
                m5=m5+1;
            }
        }
        i++;
    }
    printf("3の倍数: %d個\n", m3);
    printf("5の倍数: %d個\n", m5);
    printf("3と5の公倍数: %d個\n", m35);
    return 0;
}
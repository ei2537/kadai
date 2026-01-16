#include <stdio.h>
#include "hamakou.h"

int main () {
    int n,ksum=0,gsum=0;
    n = getint("input n:");
    int i=1;
    while(i<=n){
        if(i%2==0){
            gsum=gsum+i;
        }else{
            ksum=ksum+i;
        }
        i++;
    }
    printf("偶数の和 = %d\n奇数の和 = %d\n",gsum,ksum);
    return 0;
}
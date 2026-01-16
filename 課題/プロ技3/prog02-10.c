#include <stdio.h>
#include "hamakou.h"

int main () {
    int n,sum=0;
    n = getint("input n:");
    int i=0,a[n];
    while(i<n){
        printf("a[%d] = ",i);
        a[i]=getint("");
        i++;
    }
    i=0;
    while(i<n){
        if(a[i]%2==0){
            sum=sum+a[i];
        }
        i++;
    }
    printf("偶数データの和 = %d\n",sum);
    return 0;
}
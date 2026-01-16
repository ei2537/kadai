#include <stdio.h>
#include "hamakou.h"

int main () {
    int n;
    n = getint("input n:");
    int i=0,sum=0;
    while(i<=n){
        sum = sum+i;
        i++;
    }
    printf("0～10の整数和 = %d\n",sum);
    return 0;
}
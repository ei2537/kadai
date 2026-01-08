#include <stdio.h>
#include "hamakou.h"

int main () {
    int a,b,max,min;
    a = getint("input a: "); // 整数 a の入力
    b = getint("input b: "); // 整数 b の入力
    if(a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    printf("max = %d, min = %d\n",max,min);
    return 0;
}
#include <stdio.h>
#include "hamakou.h"

int main () {
    int a,b,c,mid,max,min;
    a = getint("input a:");
    b = getint("input b:");
    c = getint("input c:");
    if(a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    if(c>max){
        mid = max;
        max = c;
    }else if(c<min){
        mid = min;
        min = c;
    }else{
        mid = c;
    }
    printf("max = %d, mid = %d, min = %d\n",max,mid,min);
    return 0;
}
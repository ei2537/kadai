#include <stdio.h>
#include "hamakou.h"

int main () {
    int a,b,c,d,max,min;
    a = getint("input a:");
    b = getint("input b:");
    c = getint("input c:");
    d = getint("input d:");
    if(a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    if(c>max){
        max = c;
    }else if(c<min){
        min = c;
    }
    if(d>max){
        max = d;
    }else if(d<min){
        min = d;
    }
    printf("max = %d, min = %d\n",max,min);
    return 0;
}
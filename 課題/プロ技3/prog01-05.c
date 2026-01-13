#include <stdio.h>
#include "hamakou.h"

int main () {
    int a,b,c;
    a = getint("input a:");
    b = getint("input b:");
    c = getint("input c:");
    int max,min;
    if(a==b&&a==c){
        printf("３つの値は等しいです\n");
    }else if(a!=b&&b!=c&&c!=a){
        printf("３つの値は異なります\n");
    }else{
        printf("２つの値が等しいです\n");
    }
    return 0;
}
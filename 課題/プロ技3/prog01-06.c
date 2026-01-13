#include <stdio.h>
#include "hamakou.h"

int main () {
    int a,b;
    a = getint("input a:");
    b = getint("input b:");
    if(a-b>=11||a-b<=-11){
        printf("差は１１以上です\n");
    }else{
        printf("差は１０以下です\n");
    }
    return 0;
}
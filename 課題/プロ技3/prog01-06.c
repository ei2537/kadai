#include <stdio.h>
#include "hamakou.h"

int main () {
    int a,b;
    a = getint("input a:");
    b = getint("input b:");
    int c = a - b;
    if(c>=11&&c<=-11){
        printf("差は１１以上です\n");
    }else{
        printf("差は１０以下です\n");
    }
    return 0;
}
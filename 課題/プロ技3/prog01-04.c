#include <stdio.h>
#include "hamakou.h"

int main () {
    int a;
    if(a%4!=0){
        printf("平年\n");
    }else if(a%100!=0){
        printf("うるう年\n");
    }else if(a%400!=0){
        printf("平年\n");
    }else{
        printf("うるう年\n");
    }
    return 0;
}
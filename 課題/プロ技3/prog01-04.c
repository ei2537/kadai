#include <stdio.h>
#include "hamakou.h"

int main () {
    int year;
    year = getint("input year:");
    if(year%4!=0){
        printf("平年\n");
    }else if(year%100!=0){
        printf("うるう年\n");
    }else if(year%400!=0){
        printf("平年\n");
    }else{
        printf("うるう年\n");
    }
    return 0;
}
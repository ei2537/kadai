#include <stdio.h>
#include "hamakou.h"

int main () {
    int a;
    a = getint("input a:");
    if(a%3==0){
        if(a%5==0){
            printf("FizzBuzz\n");
        }else{
            printf("Fizz\n");
        }
    }else if(a%5==0){
        printf("Buzz\n");
    }
    return 0;
}
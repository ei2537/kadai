#include <stdio.h>
#include "hamakou.h"

int main () {
    int n;
    n = getint("段数:");
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
#include <stdio.h>
#include "hamakou.h"

int main () {
    int m,n;
    m = getint("行数:");
    n = getint("列数:");
    int i=0,j=0;
    while(i<m){
        while(j<n){
            printf("*");
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }
    return 0;
}
#include <stdio.h>
#include "hamakou.h"

int main () {
    float max,min,a[100];
    int n,i;
    n = getint("Input n:");
    if(n<=0||n>100){
        printf("データの数が正しくありません\n");
    }else{
        i=0;
        while(i<n){
            printf("a[%d] =",i);
            a[i] = getfloat("");
            i++;
        }
        max = a[0];
        min = a[0];
        i=1;
        while(i<n){
            if(a[i]>max){
                max = a[i];
            }
            if(a[i]<min){
                min = a[i];
            }
            i++;
        }
        printf("max = %g, min = %g\n",max,min);
    return 0;
    }
}
#include <stdio.h>
#include "hamakou.h"

int main () {
    float max,min,sum=0,avg,a[100];
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
        i=0;
        while(i<n){
            sum = sum + a[i];
            i++;
        }
        max = a[0];
        min = a[0];
        i=1;
        while(i<n){
            if(a[i]>max){
                max = a[i];
            }else if(a[i]<min){
                min = a[i];
            }
            i++;
        }
        printf("max = %g, min = %g\n",max,min);
        avg = sum/n;
        printf("sum = %g, avg = %g\n",sum,avg);
    }
    return 0;
}
#include <stdio.h>
#include "hamakou.h"

int main () {
    int n;
    n = getint("input n:");
    int i=n;
    float x,a[n];
    while(i>=0){
        printf("a[%d] = ",i);
        a[i]=getfloat("");
        i--;
    }
    x = getfloat("x: ");
    while(x!=0){
        i=1;
        float y=a[0],xn=x;
        while(i<=n){
            y=y+a[i]*xn;
            xn=xn*x;
            i++;
        }
        printf("y = %g\n", y);
        x = getfloat("input x:");
    }
    return 0;
}
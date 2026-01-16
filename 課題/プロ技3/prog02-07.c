#include <stdio.h>
#include "hamakou.h"

int main () {
    float x;
    int n;
    x = getfloat("input x:");
    n = getint("input n:");
    float ans=x;
    int i=2;
    while(i<=n){
        ans = ans*x;
        i++;
    }
    printf("%g^%d = %g\n",x,n,ans);
    return 0;
}
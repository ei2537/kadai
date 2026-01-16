#include <stdio.h>
#include "hamakou.h"

int main () {
    float x;
    int n;
    x = getfloat("input x:");
    n = getint("input n:");
    float ans=1;
    int i=1;
    while(i<=n){
        ans = ans*x;
        i++;
    }
    printf("%g^%d = %g\n",x,n,ans);
    return 0;
}
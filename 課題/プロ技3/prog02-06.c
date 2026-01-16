#include <stdio.h>
#include "hamakou.h"

int main () {
    int n,ans=1;
    n = getint("input n:");
    int i=2;
    while(i<=n){
        ans = ans*i;
        i++;
    }
    printf("%d! = %d\n",n,ans);
    return 0;
}
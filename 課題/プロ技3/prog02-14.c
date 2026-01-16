#include <stdio.h>
#include "hamakou.h"

int main () {
    int n,i=1;
    n = getint("input n:");
    while(i<=n){
        printf("%d ",i);
        if(i%3==0){
            printf("アホ");
        }else{
            int x=i;
            while(x>0&&x%10!=3){
                x=x/10;
            }
            if(x!=0){
                printf("アホ");
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}
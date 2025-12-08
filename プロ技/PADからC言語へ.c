#include <stdio.h>
int n,S1,S2,S3,S4,S5,S6,P1,P2,P3,P4;
int a[0];

/*

各演算子の優先順位

!
* / %
+ -
< <= > >=
== !=
&&
||
=

*/

int 例題1 () {
    S1;
    while (P1) {
        if (P2) S2;
        else{
            S3;
            S4;
        }
        S5;
    }
    if (!P3) S6;
    return 0;
}

int 練習問題1 () {
    S1;
    if (P1) {
        do{
            S2;
            S3;
        } while (!P2);
    }else{
        if (P3) {
            while (P4) {
                S5;
            }
        }
    }
    S6;
}

int 例題2 () {
    int max=a[0];
    int min=a[0];
    int i=1;
    while(i<n){
        if(max<a[i]) max=a[i];
        else if(min>a[i]) min=a[i];
        i++;
    }
}

int 練習問題2 () {
    int m3=0,m5=0,m35=0;
    int i=0;
    while(i<=n){
        if(a[i]%3==0){
            m3++;
            if(a[i]%5==0){
                m5++;
                m35++;
            }
        }else if(a[i]%5==0) m5++;
        i++;
    }
}

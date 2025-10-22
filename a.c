#include "struct.h"
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    Queue a;
    init(&a);
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        push(&a, x);
    }
    while(!queue_empty(&a)) {
        printf("%d ", front(&a));
        pop(&a);
    }
    
    return 0;
}
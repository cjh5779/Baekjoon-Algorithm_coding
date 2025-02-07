#include <stdio.h>

int main(void) {
    int x, a[100], y;

    scanf("%d", &x);

    for(int i=0; i<x; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &y);

    int res=0;

    for(int i=0; i<x; i++) {
        if(a[i]==y) res++;
    }

    printf("%d", res);
}
#include <stdio.h>

int main(void) {
    int x;
    scanf("%d", &x);
    int y[x];
    int max, min;

    for(int i=0; i<x; i++) {
        scanf("%d", &y[i]);
    }

    max = y[0];
    min = y[0];

    for(int i=0; i<x; i++) {
        if(y[i] < min) min = y[i];
        if(y[i] > max) max = y[i];
    }

    printf("%d %d", min, max);
}

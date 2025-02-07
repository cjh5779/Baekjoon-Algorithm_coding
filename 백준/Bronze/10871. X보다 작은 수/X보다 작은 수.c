#include <stdio.h>

int main(void) {
    int a, x, y;

    scanf("%d %d", &x, &y);

    for(int i=0; i<x; i++) {
        scanf("%d", &a);

        if(a < y) {
            printf("%d ", a);
        }
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    int a[10];
    int max;
    int count=0;

    for(int i=0; i<9; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];

    for(int i=1; i<9; i++) {
        if(max < a[i]) {
            max = a[i];
            count = i;
        }
    }

    printf("%d\n%d", max, count+1);

    return 0;

}
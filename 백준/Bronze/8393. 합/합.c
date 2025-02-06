#include <stdio.h>

int main(void) {
    int n;
    int res=0;

    scanf("%d", &n);

    for(int i=1; i<n+1; i++) {
        res+=i;
    }

    printf("%d", res);

    return 0;
}
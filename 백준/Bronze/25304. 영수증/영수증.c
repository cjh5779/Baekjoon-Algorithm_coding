#include <stdio.h>

int main(void) {
    int x, n;
    int a, b;
    int res=0;

    scanf("%d %d", &x, &n);

    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        res+=a*b;
    }

    if(x==res) {
        printf("Yes");
    }else {
        printf("No");
    }

    return 0;
}
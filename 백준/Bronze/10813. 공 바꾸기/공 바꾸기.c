#include <stdio.h>

int n, m;
int arr[101];
int a, b;


void swap(int i, int j) {
    int tmp=arr[i];
    arr[i]=arr[j];
    arr[j]=tmp;
}

int main(void) {
    scanf("%d %d", &n, &m);

    for(int i=1; i<=n; i++) {
        arr[i] = i;
    }

    for(int i=0; i<m; i++) {
        scanf("%d %d", &a, &b);
        swap(a, b);
    }

    for(int i=1; i<=n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
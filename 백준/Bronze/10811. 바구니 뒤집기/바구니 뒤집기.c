#include <stdio.h>

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void) {
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n+1];

    for(int i=1; i<=n; i++) {
        arr[i]=i;
    }

    for(int k=0; k<m; k++) {
        int i, j;
        scanf("%d %d", &i, &j); 

        while(i<j) {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }

    for(int i=1; i<=n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
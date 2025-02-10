#include <stdio.h>

int main(void) {
    int arr[42]={0};
    int a;
    int tmp=0;

    for(int i=0; i<10; i++) {
        scanf("%d", &a);
        arr[a%42]=1;
    }

    for(int i=0; i<42; i++) {
        tmp+=arr[i];
    }

    printf("%d", tmp);

    return 0;
}
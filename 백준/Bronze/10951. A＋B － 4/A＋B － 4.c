#include <stdio.h>

int main(void) {
    int a, b;

    while (1) {
        if (scanf("%d %d", &a, &b) != 2) break;  // 입력이 없으면 종료

        printf("%d\n", a + b);
    }

    return 0;
}

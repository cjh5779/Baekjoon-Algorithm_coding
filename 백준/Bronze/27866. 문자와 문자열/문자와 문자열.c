#include <stdio.h>

int main(void) {
    char ch[1001];
    int n;

    scanf("%s", ch);
    scanf("%d", &n);

    printf("%c", ch[n-1]);
}
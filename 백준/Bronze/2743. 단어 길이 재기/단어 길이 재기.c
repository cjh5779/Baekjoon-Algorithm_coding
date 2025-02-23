#include <stdio.h>

int main(void) {
    char ch[101];
    int count = 0;

    scanf("%s", ch);

    while(ch[count]!='\0') {
        count++;
    }

    printf("%d", count);

    return 0;
}
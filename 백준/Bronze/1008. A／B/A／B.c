#include <stdio.h>

int main(void) {
    int a, b;
    double c;
    
    scanf("%d %d", &a, &b);
    
    c = (double)a/b;
    
    printf("%.9lf", c);

    return 0;
}
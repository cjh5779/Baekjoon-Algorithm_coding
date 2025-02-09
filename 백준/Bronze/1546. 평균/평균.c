#include <stdio.h>

int main(void) {
    int a;
    double tmp;
    double arr[1001];
    double avg=0;
    double max=0.0;

    scanf("%d", &a);

    for(int i=0; i<a; i++) {
        scanf("%d", &tmp);
        if(max < tmp) {
            max = tmp;
        }
        arr[i]=tmp;
    }

    for(int i=0; i<a; i++) {
        arr[i] = (arr[i]/max)*100;
        avg += arr[i];
    }

    printf("%lf", avg/a);

    return 0;
}
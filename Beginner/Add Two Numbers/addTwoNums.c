#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int a, b, i, sumArray[t];
    for (i=0; i<t; i++) {
        scanf("%d %d", &a, &b);
    int sum = a + b;
        sumArray[i] = sum;
    }
    for (i=0; i<t; i++) {
        printf("%d\n", sumArray[i]);
    }
}

#include <stdio.h>
#include <math.h>

int main(void) {   
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        int sum=0, num;
        scanf("%d", &num);
        while (num) {
            sum += round(num/5);
            num = round(num/5);
        }
        printf("%d\n", sum);
    }
}

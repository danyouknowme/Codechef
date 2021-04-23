#include <stdio.h>

int main() {
    int n, k, ans=0;
    scanf("%d %d", &n, &k);
    for (int i=0; i<n; i++) {
        int t;
        scanf("%d", &t);
        if (t % k == 0) {
            ans++;
        }
    }
    printf("%d", ans);
}

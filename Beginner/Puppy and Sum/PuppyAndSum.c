#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
	    int a, b;
	    scanf("%d %d", &a, &b);
	    int ans;
	    for (int j=0; j<a; j++) {
	        ans = (b*(b+1))/2;
	        b = ans;
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
	    int x;
	    scanf("%d", &x);
	    if (x % 10 == 0) {
	        printf("0\n");
	    } else if (x % 5 == 0) {
	        printf("1\n");
	    } else {
	        printf("-1\n");
	    }
	}
	return 0;
}

#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
	    int is_prime=0, num;
	    scanf("%d", &num);
	    for (int j=1; j<num+1; j++) {
	        if (num % j == 0) {
	            is_prime++;
	        }
	    }
	    if (is_prime == 2) {
	        printf("yes\n");
	    } else {
	        printf("no\n");
	    }
    }
    return 0;
}


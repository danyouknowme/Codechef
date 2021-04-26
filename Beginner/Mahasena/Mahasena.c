#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++) {
	    int num;
	    scanf("%d", &num);
	    arr[i] = num;
	}
	int even=0, odd=0;
	for (int j=0; j<n; j++) {
	    if (arr[j] % 2 == 0) {
	        even++;
	    } else {
	        odd++;
	    }
	}
	if (even > odd) {
	    printf("READY FOR BATTLE");
	} else {
	    printf("NOT READY");
	}
}

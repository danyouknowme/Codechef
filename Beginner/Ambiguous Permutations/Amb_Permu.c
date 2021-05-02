#include <stdio.h>
#include <stdbool.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d", &n);
	while (n!=0) {
	    int arr[n], num[n], zeros[n];
	    for (int i=1; i<=n; i++) {
	        int number;
	        scanf("%d", &number);
	        arr[i-1] = number;
	        num[i-1] = i;
	        zeros[i-1] = 0;
	    }
	    for (int j=0; j<n; j++) {
	        zeros[arr[j]-1] = num[j];
	    }
	    bool check=true;
	    for (int k=0; k<n; k++) {
	        if (arr[k] != zeros[k]) {
	            check=false;
	        }
	    }
	    if (check) {
	        printf("ambiguous\n");
	    } else {
	        printf("not ambiguous\n");
	    }
	    scanf("%d", &n);
	}
}

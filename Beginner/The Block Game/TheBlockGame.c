#include <stdio.h>
#include <math.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
	    int num;
	    scanf("%d", &num);
	    int temp=num, rev=0;
	    while (num > 0) {
	        int dig;
	        dig = num%10;
	        rev = rev*10+dig;
	        num = round(num/10);
	    }
	    if (temp == rev) {
	        printf("wins\n");
	    } else {
	        printf("loses\n");
	    }
	}
}

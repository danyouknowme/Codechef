#include <stdio.h>

int main(void) {
	// your code goes here
	int a, b;
	scanf("%d\n%d", &a, &b);
	int area=a*b, peri=2*(a+b);
	if (area > peri) {
	    printf("Area\n");
	    printf("%d", area);
	} else if (area < peri) {
	    printf("Peri\n");
	    printf("%d", peri);
	} else {
	    printf("Eq\n");
	    printf("%d", area);
	}
}


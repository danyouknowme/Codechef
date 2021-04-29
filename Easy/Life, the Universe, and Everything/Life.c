#include <stdio.h>

int main(void) {
	// your code goes here
	int num;
	scanf("%d", &num);
	while (num != 42) {
	    printf("%d\n", num);
	    scanf("%d", &num);
	}
}

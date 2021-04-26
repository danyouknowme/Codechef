#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
	    int hardness;
	    float carbon;
	    long long tensile;
	    scanf("%d %f %lld", &hardness, &carbon, &tensile);
	    if (hardness > 50 && carbon < 0.7 && tensile > 5600) {
	        printf("10\n");
	    } else if (hardness > 50 && carbon < 0.7) {
	        printf("9\n");
	    } else if (carbon < 0.7 && tensile > 5600) {
	        printf("8\n");
	    } else if (hardness > 50 && tensile > 5600) {
	        printf("7\n");
	    } else if (hardness > 50 || carbon < 0.7 || tensile > 5600) {
	        printf("6\n");
	    } else {
	        printf("5\n");
	    }
	}
}

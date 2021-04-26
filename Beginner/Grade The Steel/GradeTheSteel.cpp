#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
	    int hardness;
	    float carbon;
	    long long tensile;
	    cin >> hardness >> carbon >> tensile;
	    if (hardness > 50 && carbon < 0.7 && tensile > 5600) {
	        cout << 10 << endl;
	    } else if (hardness > 50 && carbon < 0.7) {
	        cout << 9 << endl;
	    } else if (carbon < 0.7 && tensile > 5600) {
	        cout << 8 << endl;
	    } else if (hardness > 50 && tensile > 5600) {
	        cout << 7 << endl;
	    } else if (hardness > 50 || carbon < 0.7 || tensile > 5600) {
	        cout << 6 << endl;
	    } else {
	        cout << 5 << endl;
	    }
	}
}

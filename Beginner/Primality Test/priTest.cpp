#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
	    int is_prime=0, num;
	    cin >> num;
	    for (int j=1; j<num+1; j++) {
	        if (num % j == 0) {
	            is_prime++;
	        }
	    }
	    if (is_prime == 2) {
	        cout << "yes" << endl;
	    } else {
	        cout << "no" << endl;
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
	    int x;
	    cin >> x;
	    if (x % 10 == 0) {
	        cout << "0\n";
	    } else if (x % 5 == 0) {
	        cout << "1\n";
	    } else {
	        cout << "-1\n";
	    }
	}
}

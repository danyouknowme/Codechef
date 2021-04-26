#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) {
	    int num;
	    cin >> num;
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
	    cout << "READY FOR BATTLE";
	} else {
	    cout << "NOT READY";
	}
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	while (n!= 0) {
	    int arr[n], num[n], zeros[n];
	    for (int i=1; i<n+1; i++) {
	        int number;
	        cin >> number;
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
            cout << "ambiguous\n";
        } else {
            cout << "not ambiguous\n";
        }
        cin >> n;
	}
}

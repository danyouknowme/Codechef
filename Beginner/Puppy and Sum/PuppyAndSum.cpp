#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
	    int a, b;
	    cin >> a >> b;
	    int ans;
	    for (int j=0; j<a; j++) {
	        ans = (b*(b+1))/2;
	        b = ans;
	    }
	    cout << ans << endl;
	}
	return 0;
}

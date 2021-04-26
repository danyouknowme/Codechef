#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
	    int num;
	    cin >> num;
	    int temp=num, rev=0;
	    while (num > 0) {
	        int dig;
	        dig = num%10;
	        rev = rev*10+dig;
	        num = round(num/10);
	    }
	    if (temp == rev) {
	        cout << "wins\n";
	    } else {
	        cout << "loses\n";
	    }
	}
}

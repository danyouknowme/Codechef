#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
	    int sum=0, num;
	    cin >> num;
	    while (num) {
	        sum += round(num/5);
	        num = round(num/5);
	    }
	    cout << sum << endl;
	}
}

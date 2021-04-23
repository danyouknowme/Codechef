#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b;
	cin >> a;
	cin >> b;
	int area=a*b, peri=2*(a+b);
	if (area > peri) {
	    cout << "Area" << endl;
	    cout << area;
	} else if (area < peri) {
	    cout << "Peri" << endl;
	    cout << peri;
	} else {
	    cout << "Eq" << endl;
	    cout << area;
    }
}

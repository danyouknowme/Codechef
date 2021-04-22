#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int withdraw;
	float balance;
	cin >> withdraw >> balance;
	if (withdraw % 5 == 0 && (withdraw+0.5<=balance)) {
	    balance -= (withdraw+0.5);
	}
	cout << fixed << setprecision(2) << balance;
}

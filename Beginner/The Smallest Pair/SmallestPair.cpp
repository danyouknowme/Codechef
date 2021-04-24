#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
	    int arr_sz;
	    cin >> arr_sz;
	    int arr[arr_sz];
	    for (int j=0; j<arr_sz; j++) {
	        cin >> arr[j];
	    }
	    sort(arr, arr + arr_sz);
	    cout << arr[0] + arr[1] << endl;
	}
}

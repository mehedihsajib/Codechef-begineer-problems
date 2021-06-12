
///////////////////////////////////////
// Mahasena.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {

	// Taking size of n;
	int n;
	cin >> n;
	int arr[n];

	// Initialize two counter.
	int lucky = 0, unlucky = 0;

	// Taking n size of array.
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// Check the array's element even or add and increment/decrement counter.
	for(int i = 0; i < n; i++) {
		if(arr[i]%2 == 0) {
			lucky++;
		} else {
			unlucky++;
		}
	}

	// Check codition if satisfied or not and print output.
	if(lucky > unlucky) {
		cout << "READY FOR BATTLE" << endl;
	} else {
		cout << "NOT READY" << endl;
	}

	return 0;
}



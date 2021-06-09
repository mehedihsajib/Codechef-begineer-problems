
///////////////////////////////////////
// Turbo sort.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {
	// Declare variables.
	int t, n, temp[1000001] = {0};

	// Taking number of test case.
	cin >> t;

	while(t--) {
	 	cin >> n;
	 	temp[n]++;
	}

	// Print numbers in assending order.
	for (int i = 1; i <= 1000000; i++) {
		while(temp[i]--) {
	 		cout << i << endl;
	 	}
	}

	return 0;
}


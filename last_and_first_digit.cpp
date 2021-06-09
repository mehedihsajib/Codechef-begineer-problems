
///////////////////////////////////////
// Last and first digit.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

// Find first digit
int firstDigit(int n) {
	while (n >= 10) {
		n /= 10;
	}
	return n;
}

// Find first digit
int lastDigit(int n) {
	n = n%10;
	return n;
}

int main() {
	int t, n, sum;
	cin >> t;

	while(t--) {
	 	cin >> n;
	 	sum = firstDigit(n) + lastDigit(n);
	 	cout << sum << endl;
	}

	return 0;
}


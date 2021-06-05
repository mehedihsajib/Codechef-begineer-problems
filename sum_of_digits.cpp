
///////////////////////////////////////
// Sum of digits.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {

	// Taking number test case.
	int t;
	cin >> t;

	while(t--) {
		// Taking n while t is true.
		int n, sum = 0, reminder;
	  cin >> n;
	  
	  // Calculate sum while n is not 0;
	  while(n != 0) {
	  	reminder = n%10;
		  sum += reminder;
		  n /= 10;
	  }
	  cout << sum << endl;
	}

	return 0;
}



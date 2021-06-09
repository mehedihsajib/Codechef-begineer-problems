
///////////////////////////////////////
// Lucky four.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {
	// Declare variables.
	int t, n;

	// Taking number of test case.
	cin >> t;


	while(t--) {
	  cin >> n;

	  int count = 0;
	  // Count 4 while n is not zero.
	  while(n != 0) {
	    int reminder = n%10;
	    if (reminder == 4) {
	    	count++;
	    }
	    n /= 10;
	  }
	  cout << count << endl;
	}

	return 0;
}


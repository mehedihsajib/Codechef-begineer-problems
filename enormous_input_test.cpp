
///////////////////////////////////////
// Enormous Input Test
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {

	// Declare essential variables.
	int n, k, t, count = 0;

	// Taking input from user;
	cin >> n >> k;

	while(n--) {
	    cin >> t;

	    if (t%k == 0) {
	    	count++;
	    }
	}

	cout << count << endl;

	return 0;
}


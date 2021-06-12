
///////////////////////////////////////
// The Block Game.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;

	while(t--) {
	  cin >> n;
	 	bool isPrime = true;

	  for(int i = 2; i < n; i++) {
	  	if(n%i == 0) {
	  		isPrime = false;
	  	}
	  }
	  if(n <= 1) {
	  	cout << "no" << endl;
	  } else if (isPrime == false) {
	  	cout << "no" << endl;
	  } else {
	  	cout << "yes" << endl;
	  }
	}

	return 0;
}



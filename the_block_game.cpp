
///////////////////////////////////////
// The Block Game.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

// Reverse the integer.
int reverseNum(int n) {
	int reminder, reverseNum = 0;
	while(n != 0) {
	  reminder = n%10;
		reverseNum = reverseNum*10 + reminder;
		n /= 10;
	}
	return reverseNum;
}

int main() {
	int t, n;
	cin >> t;

	while(t--) {
	  cin >> n;
	  // Check the n and reverse n equal or not and print output.
	  if(reverseNum(n) == n) {
	  	cout << "wins" << endl;;
	  } else {
	  	cout << "loses" << endl;
	  }
	}

	return 0;
}



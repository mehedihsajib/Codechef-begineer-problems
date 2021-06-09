
///////////////////////////////////////
// Reverse the number.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t, n, reminder, reversedNum = 0;
	cin >> t;
	while(t--) {
		cin >> n;
		while(n != 0) {
			reminder = n%10;
			reversedNum = reversedNum*10 + reminder;
			n/=10;
		}
		cout << reversedNum << endl;
		reversedNum = 0;
	}

	return 0;
}




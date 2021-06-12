
///////////////////////////////////////
// Smallest Numbers of Notes.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {

	int t, n;
	cin >> t;

	while(t--) {
	  cin >> n;
	  int notes[] = {100, 50, 10, 5, 2, 1};
	  int sum = 0;

	  for(int i = 0; i < 6; i++) {
	  	sum += n/notes[i];
	  	n %= notes[i];
	  }
	  cout << sum << endl;
	}

	return 0;
}




///////////////////////////////////////
// Lapindromes.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {
	// Taking number of test case.
	int t;
	cin >> t;

	while(t--) {
		string s;
		cin >> s;
		int l = s.size(), flag = 1;

		int leftLetters[26] = {0}, rightLetters[26] = {0};
		// Find left side letters.
		for (int i = 0; i < l / 2; i++) {
			int index = s[i] - 'a';
			leftLetters[index]++;
		}

		// Find right side letters.
		for (int i = (l+1) / 2; i < l; i++) {
			int index = s[i] - 'a';
			rightLetters[index]++;
		}

		// Check if both side's of letter same or not.
		for (int i = 0; i < 26; i++) {
			if (leftLetters[i] != rightLetters[i]) {
				flag = 0;
			}
		}

		// Print output.
		if (flag != 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}


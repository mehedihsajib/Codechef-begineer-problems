
///////////////////////////////////////
// The Block Game.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	char letter;
	cin >> t;

	while(t--) {
	  cin >> letter;
	 	
	 	if (letter == 'b' || letter == 'B') {
	 		cout << "BattleShip" << endl;
	 	} if (letter == 'c' || letter == 'C') {
	 		cout << "Cruiser" << endl;
	 	} if (letter == 'd' || letter == 'D') {
	 		cout << "Destroyer" << endl;
	 	} if (letter == 'f' || letter == 'F') {
	 		cout << "Frigate" << endl;
	 	}
	}

	return 0;
}



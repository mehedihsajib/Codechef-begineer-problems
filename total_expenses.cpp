
///////////////////////////////////////
// Total expenses.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	float quantity, price;
	double expense;
	cin >> t;

	while(t--) {
	  cin>>quantity>>price;

	  if (quantity > 1000) {
	  	expense = (quantity*price) * 0.9;
	  } else {
	  	expense = quantity*price;
	  }
	  cout << fixed << setprecision(6) << expense << endl;

	}
	return 0;
}




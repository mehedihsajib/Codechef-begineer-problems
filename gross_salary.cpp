
///////////////////////////////////////
// Gross Salery.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	float grossSalery;

	while(t--) {
		int salary;
		cin >> salary;

		float HRA, DA;
		if (salary < 1500) {
			HRA = salary * 0.10;
			DA = salary * 0.90;
			grossSalery = salary + HRA + DA;
		} else if (salary >= 1500) {
			HRA = 500.00;
			DA = salary * 0.98;
			grossSalery = salary + HRA + DA;
		}
		cout << fixed << setprecision(2) << grossSalery << endl;
	}

	return 0;
}


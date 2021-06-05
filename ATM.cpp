#include <bits/stdc++.h>
using namespace std;

int main() {

	// Declare essential variables.
	int withdrawAmount;
	float initialBalance, balance, bankCharge = 0.50;

	// Taking input from user;
	cin >> withdrawAmount >> initialBalance;

	if (withdrawAmount >= 0 && withdrawAmount%5 == 0 && initialBalance >= withdrawAmount + bankCharge) {
		balance = initialBalance - withdrawAmount - bankCharge;
		cout << fixed << setprecision(2) << balance;
	} else {
		cout << fixed << setprecision(2) << initialBalance;
	}

	return 0;
}


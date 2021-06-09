
///////////////////////////////////////
// Second largest number.
///////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t, a, b, c, mid;
	cin >> t;
	while(t--) {
		cin >> a >> b >> c;
		
		if(a<b && a>c || a>b && a<c) {
			mid = a;
		} else if(b>a && b<c || b<a && b>c) {
			mid = b;
		} else if(c>a && c<b || c<a && c>b) {
			mid = c;
		}
		cout << mid << endl;
  }      

	return 0;
}



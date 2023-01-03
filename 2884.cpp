#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int h; int m;

	cin >> h  >> m;

	
	if (m < 45) {
		h = h - 1;
		if (h < 0) {
			h = 23;
		}
		m = m + 15;
	}
	else{
		m = m - 45;
	}
	
	cout << h << " " << m;
	return 0;
}

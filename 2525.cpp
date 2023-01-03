#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int h; int m; int count;

	cin >> h  >> m;
	cin >> count;

	if(m+count >=60) {
		h += (m + count) / 60;
		if (h == 24) {
			h = 0;
			m = (m + count) % 60;
		}
		else if (h > 24) {
			h %= 24;
			m = (m + count) % 60;
		}
		else {
			m = (m + count) % 60;
		}
	}
	else {
		m = m + count;
	}


	cout << h << " " << m;
	return 0;
}

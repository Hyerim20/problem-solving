#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t, num;
	string st;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> num >> st;
		for (int j = 0; j < st.size(); j++) {
			for (int k = 0; k < num; k++) {
				cout << st[j];
			}
		}
		cout << "\n";
	}

	return 0;
}

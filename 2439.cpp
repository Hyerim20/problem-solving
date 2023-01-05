#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = n; j >i+1; j--) {
			cout << " ";
		}
		for (int k = 1; k <i+2; k++) {
				cout << "*";
			}
		cout << "\n";
	}
	return 0;
}

#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	int student[31] = { 0 };

	for (int i = 1; i <= 28; i++) {
		cin >> n;
		student[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (student[i] == 0) {
			cout << i << "\n";
		}
	}
	return 0;
}

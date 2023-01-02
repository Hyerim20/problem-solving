#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n; int num;
	cin >> n;
	int count = n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 1) {
			count--;
		}

		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				count--;
				break;
			}
		}
	}
	cout << count << "\n";
	return 0;
}

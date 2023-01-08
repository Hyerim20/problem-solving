#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	int max = 0;
	int pos = 0;

	for (int i = 1; i < 10; i++) {
		cin >> n;
		if (n > max) {
			max = n;
			pos = i+1;
		}
	}
	cout << max << "\n" << pos;
	return 0;
}

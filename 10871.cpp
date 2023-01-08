#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, x, a;
	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (x > a) {
			cout << a << " ";
		}
	}
	return 0;
}

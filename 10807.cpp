#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n = 0, n_num[101] = {}, v = 0, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> n_num[i];
	}
	cin >> v;
	for (int i = 0; i < n; i++) {
		if (n_num[i] == v) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

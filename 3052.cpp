#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int a;
	int res = 0;
	int rem = 0;
	int cnt[42] = { 0, };

	for (int i = 0; i < 10; i++) {
		cin >> a;
		int rem = a % 42;
		cnt[rem] += 1;

		if (cnt[rem] == 1) {
			res++;
		}
	}
	cout << res;
		return 0;
}

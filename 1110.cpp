#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, n1, n10, new_n;
	int cnt = 0;
	cin >> n;
	new_n = n;

	while (1)
	{
		n1 = new_n % 10;
		n10 = new_n / 10;
		new_n = n1 * 10 + (n1 + n10) % 10;
		cnt++;
		if (new_n == n) break;
	}

	cout << cnt;
	return 0;
}

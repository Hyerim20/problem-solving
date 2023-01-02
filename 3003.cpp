#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int chess[6] = { 1,1,2,2,2,8 }, i, now;
	for (i = 0; i < 6; i++) {
		cin >> now;
		cout << chess[i] - now << " ";
	}
	return 0;
}

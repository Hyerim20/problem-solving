#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int a; int b;
	cin >> a;
	cin >> b;

	cout << a * (b % 10) << "\n" << a * ((b / 10) % 10) << "\n" << a * (b / 100) << "\n" << a * b;

	return 0;
}

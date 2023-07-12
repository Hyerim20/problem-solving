#include<iostream>
using namespace std;

int main(int argc, const char*argv[]) {
	
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int a, b, c;
	int num;
	int arr[10] = { 0 };

	cin >> a >> b >> c;
	num = a * b * c;

	while (num != 0) {
		arr[num % 10] += 1;
		num /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}

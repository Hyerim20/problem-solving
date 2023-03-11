#include<iostream>
using namespace std;

int main() {
	
	int arr[10000] = { 10000 };
	int n; int k;
	int cnt = 0

	cin >> n >> k;

	for (int i = 1; i < 10000; i++) {
		if (i > n)
			break;
		if (n % i == 0) {
			cnt++;
			arr[cnt] = i;
		}
	}
	if (cnt < k)
		cout << "0";
	else
		cout << arr[k];

	return 0;
}



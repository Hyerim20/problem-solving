#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}		
		else if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << min << " " << max;

	return 0;
}

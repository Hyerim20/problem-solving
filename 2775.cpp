#include<iostream>
using namespace std;

int main() {
	
	int arr[15][15] = { 0, };
	int T,k,n;
	cin >> T;

	for (int i = 1; i < 15; i++) {
		arr[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		arr[i][1] = 1;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 2; j < 15; j++) {
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}
	while (T-- > 0) {
		cin >> k >> n;
		cout << arr[k][n] << "\n";
	}
}

//풀다가 울뻔했네...

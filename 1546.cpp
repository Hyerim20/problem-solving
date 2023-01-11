#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	double avg = 0, _max = 0;
	double arr[1000] = { 0, }; //다른 값을 다 0으로 채워주려고 ',' 쓰는 거

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (_max< arr[i]) {
			_max = arr[i];
		}
	}

	for (int j = 0; j < n; j++) {
		arr[j] = arr[j] / _max * 100;
		avg += arr[j];
	}
	cout << avg/n;
		return 0;
}

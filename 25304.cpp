#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	double total, N;
	int a, b;
	cin >> total; 
	cin >> N;

	for (int i = 0; i <N; i++) {
		cin >> a >> b;
		total -= a * b;
	}

	if (total == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	

	return 0;
}

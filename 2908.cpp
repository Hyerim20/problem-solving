#include<iostream>
using namespace std;

int num, num2;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> num;
	cin >> num2;
	
	int num_1 = (num % 10) * 100 + ((num % 100) / 10) * 10 + (num / 100);
	int num_2 = (num2 % 10) * 100 + ((num2 % 100) / 10) * 10 + (num2 / 100);
	
	if (num_1 > num_2) {
		cout << num_1;
	}
	else {
		cout << num_2;
	}

	return 0;
}

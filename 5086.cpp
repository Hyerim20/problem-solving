#include<iostream>
using namespace std;

int main() {
	
	int a, b;

	while (1) {
		cin >> a >> b;

		if (a != 0 && b != 0) {
			if (b % a == 0)
				cout << "factor" << "\n";
			else if (a % b == 0)
				cout << "multiple" << "\n";
			else
				cout << "neither" << "\n";
		}
		else
			break;
	}
	return 0;
}



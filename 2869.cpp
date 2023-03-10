#include<iostream>
using namespace std;

int main() {
	
	int day;
	int a, b, v;

	cin >> a >> b >> v;

	if ((v - a) % (a - b) == 0)
		day = (v - a) / (a - b);
	else
		day = (v - a) / (a - b) + 1;

	cout << day + 1;
}

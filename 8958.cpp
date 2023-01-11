#include<iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	int cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string n;
		cin >> n;

		int total = 0;
		int cnt = 0;

		for (int j = 0; j < n.size(); j++) {
			if (n[j] == 'O')
			{
				cnt++;
				total += cnt;
			}

			else
				cnt = 0;
		}
		cout << total << "\n";
	}
		return 0;
}

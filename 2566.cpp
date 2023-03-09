#include<iostream>
using namespace std;

int main() {
	int x, y; //행열 번호

	int array[9][9]; //행과열 
	int max = 0; //최대
	int num = 0; 

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> array[i][j];
			num = array[i][j];
			if (num >= max) {
				max = num;
				x = i;
				y = j;
			} //최댓값을 찾는다
		}
	}
	cout << max << "\n";
	cout << x+1  << " " << y+1  << "\n";

}

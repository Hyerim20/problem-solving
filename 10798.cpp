#include<iostream>
using namespace std;

char num[5][16];

int main() {
	
	for(int i = 0; i<5; i++){
		cin >> num[i];
	}
	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (num[i][j]!=0)
				cout << num[i][j];
			}
		}
	}

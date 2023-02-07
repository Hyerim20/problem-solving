#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int num = 0;
	cin >> str;

	int i = 0;
	while (i < str.length()) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=') {
				i++;
			}
			else if (str[i + 1] == '-') {
				i++;
			}
		}
		if (str[i] == 'd') {
			if (str[i + 1] == '-') {
				i++;
			}
			else if (str[i + 1] == 'z') {
				if (str[i + 2] == '=') {
					i++;
				}
			}
		}
		if (str[i] == 'l') {
			if (str[i + 1] == 'j') {
				i++;
			}
		}
		if (str[i] == 'n') {
			if (str[i + 1] == 'j') {
				i++;
			}
		}
		if (str[i] == 's') {
			if (str[i + 1] == '=') {
				i++;
			}
		}
		if (str[i] == 'z') {
			if (str[i + 1] == '=') {
				i++;
			}
		}
		num++;
		i++;
	}
		cout << num;
		return 0;
	}

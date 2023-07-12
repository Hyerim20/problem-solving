#include<iostream>
using namespace std;

int alpha[26], cnt = 0;
string input;

int main(int argc, const char* argv[]) {

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] < 97) 
			alpha[input[i] - 65]++; //대문자 아스키코드 65~90
		else
			alpha[input[i] - 97]++; //소문자 아스키코드 97~122
	}

	int max = 0, max_index = 0;

	for (int i = 0; i < 26;i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			max_index = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == alpha[i])
			cnt++;
	}
	
	if (cnt > 1)
		cout << "?";
	else
		cout << (char)(max_index + 65);

	return 0;
}

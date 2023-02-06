#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string word;
	getline(cin,word);
	int cnt = 1;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == ' ') {
			cnt++;
		}
	}
	
	if (word[0] == ' ' || word[0] == '\0') {
		cnt--;
	}

	if (word[word.length() - 1] == ' ') {
		cnt--;
	}
	cout << cnt;
	return 0;
}

#include<iostream>
using namespace std;

int main() {
	
	int num;
	cin >> num;
	
	int cnt = 1; // 최소 칸수
	int range = 1; //숫자 범위 1칸:1 2칸:2~7 3칸:8~19 ..
	int tmp = 1; //6의 배수 더하기

	while (1) {
		if (range >= num) {
			break;
		}
		tmp = 6 * (cnt++);
		range += tmp;
	}
	cout << cnt;
}

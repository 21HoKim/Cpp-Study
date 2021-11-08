#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	int larger;
	cout << "첫번째 숫자 입력: ";
	cin >> num1;
	cout << "두번째 숫자 입력: ";
	cin >> num2;
	if (num1 >= num2) {
		larger = num1;
	}
	if (num1 < num2) {
		larger = num2;
	}
	/*else {
		larger = num2;
	}*/
	cout << "더 큰 숫자 = " << larger;
	return 9;
}
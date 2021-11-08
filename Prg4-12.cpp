#include<iostream>
using namespace std;
int main() {
	unsigned int num;
	cout << "시험점수 입력하세요 : ";
	cin >> num;

	switch (num / 10) {
	case 10:
	case 9:
		cout << "수"; break;
	case 8:
		cout << "우"; break;
	case 7:
		cout << "미"; break;
	case 6:
		cout << "양"; break;
	default:
		cout << "가";
	}
	return 0;
}
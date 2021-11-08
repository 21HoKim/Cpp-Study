#include<iostream>
using namespace std;
int main() {
	unsigned int year;
	bool leapYear;
	cout << "연도를 입력하세요 : ";
	cin >> year;
	leapYear = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
	if (leapYear) {
		cout << "윤년입니다"<<endl;
	}
	else {
		cout << "평년입니다"<<endl;
	}
	return 0;
}
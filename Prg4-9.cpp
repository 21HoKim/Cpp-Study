#include<iostream>
using namespace std;
int main() {
	unsigned int year;
	bool leapYear;
	cout << "������ �Է��ϼ��� : ";
	cin >> year;
	leapYear = (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
	if (leapYear) {
		cout << "�����Դϴ�"<<endl;
	}
	else {
		cout << "����Դϴ�"<<endl;
	}
	return 0;
}
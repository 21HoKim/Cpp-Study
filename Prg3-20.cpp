#include<iostream>
#include<limits>
using namespace std;
int main() {
	double num1 = +numeric_limits<double>::max();
	double num2 = -numeric_limits<double>::max();
	cout << "double�� �ִ� : " << num1 << endl << "double�� �ּ�" << num2 << endl;
	num1 *= 1000.00;
	num2 *= 1000.00;
	cout << "�����÷ο� double : " << num1 << endl << "����÷ο� double : " << num2 << endl;
	return 0;
}
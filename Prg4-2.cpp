#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double hours;
	double rate;
	double regularPay;
	double overPay;
	double totalPay;
	cout << "���� �ð��� �Է��ϼ���: ";
	cin >> hours;
	cout << "�ð��� �޿��� �Է��ϼ���: ";
	cin >> rate;
	regularPay = hours * rate;
	overPay = 0.0;
	if (hours > 40.0) {
		overPay = (hours - 40.0) * rate * 0.30;
	}
	totalPay = (hours - 40.0) * rate * 0.30;
	totalPay = regularPay + overPay;
	cout << fixed << showpoint;
	cout << "�Ϲ� �޿� = " <<setprecision(2) << regularPay << endl;
	cout << "�ʰ��ٹ��� ���� �޿� = " /*<< /*setprecision(3)*/ << overPay << endl;
	cout << "��ü �޿� = " /*<< setprecision(3)*/ << totalPay << endl;
	return 0;
}
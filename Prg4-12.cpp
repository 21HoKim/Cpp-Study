#include<iostream>
using namespace std;
int main() {
	unsigned int num;
	cout << "�������� �Է��ϼ��� : ";
	cin >> num;

	switch (num / 10) {
	case 10:
	case 9:
		cout << "��"; break;
	case 8:
		cout << "��"; break;
	case 7:
		cout << "��"; break;
	case 6:
		cout << "��"; break;
	default:
		cout << "��";
	}
	return 0;
}
#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	int num;
	int number_student=0;
	cout << "������ �Է��ϼ���(�����Ϸ��� ���� �Է�) : ";
	cin >> num;
	while (num >= 0) {
		sum += num;
		cout << "������ �Է��ϼ���(�����Ϸ��� ���� �Է�) : ";
		cin >> num;
		number_student++;
	}
	cout << "�� �� : " <<sum << endl;
	cout << "��� : " << (double)sum / number_student << endl;
	return 0;
}
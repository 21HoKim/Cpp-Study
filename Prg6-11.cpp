#include<iostream>

using namespace std;
int max(int n1, int n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}
int main() {
	int num1, num2;
	cout << "�ΰ��� ���ڸ� �Է��ϼ��� : ";
	cin >> num1 >> num2;

	cout << "���� ū ���ڴ�" << max(num1,num2) << "�Դϴ�" << endl;
	return 0;
}
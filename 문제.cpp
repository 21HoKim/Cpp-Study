#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
//168��
/*int main() {
	unsigned int a;
	std::cin >> a;
	cout << (a % 10) * 10 + a / 10 << endl;
	return 0;
} 1�� */
/*
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && a < c) {
		cout << a<<endl;
	}
	else if (b < a && b < c) {
		cout << b<<endl;
	}
	else {
		cout << c<<endl;
	}
}2�� */
/*
int main() {
	int a, b, c;
	cout << "���� 3���� �Է��ϼ��� : ";
	cin >> a >> b >> c;
	double ave;
	ave = ((double)a + b + c) / 3.0;
	if (ave >= 90) {
		cout << "A�����Դϴ�";
	}
	else if (ave <= 90 && ave >= 80) {

	}

	return 0;
}*/ //5��
/*
int main() {
	int num;
	cout << "�����ϴ� ������ �Է��ϼ��� : ";
	cin >> num;
	int money=0;
	cout << "�����ؾ��� �������(��Ϻ� 10�޷� ����) : ";
	if (num > 12) {
		money = 12 * 10 + 10;
	}
	else {
		money = num * 10 + 10;
	}
	cout << money << "$ �Դϴ�." << endl;


	return 0;
}6�� */
/*
int main() {
	int money;
	int amount;
	cout << "���� ���� ���� �Է� : ";
	cin >> money;
	cout << "���� ���� �Է� : ";
	cin >> amount;
	int sum = money * amount;
	if (amount <= 9 && amount >= 1) {
		cout << "������ 0% �� ���� : " << sum << endl;
	}
	else if (amount <= 49 && amount >= 10) {
		cout << "������ 3% �� ���� : " << sum-sum*0.03 << endl;
	}
	else if (amount <= 99 && amount >= 50) {
		cout << "������ 5% �� ���� : " << sum - sum * 0.05 << endl;
	}
	else if (amount >= 100) {
		cout << "������ 10% �� ���� : " << sum - sum * 0.1 << endl;
	}
	else {
		cout << "�����߻� �ٽ� �����ϼ���\n";
	}
	return 0;
}7�� */
//210��
int main() {
	cout << "type ";
	int a;
	cin >> a;
	switch(a) {
	case 1:
		break;
	case 2:
		break;
	default :
		cout << "error!!\n";
	}
	return 0;
}
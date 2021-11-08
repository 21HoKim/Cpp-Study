#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
//168쪽
/*int main() {
	unsigned int a;
	std::cin >> a;
	cout << (a % 10) * 10 + a / 10 << endl;
	return 0;
} 1번 */
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
}2번 */
/*
int main() {
	int a, b, c;
	cout << "점수 3개를 입력하세요 : ";
	cin >> a >> b >> c;
	double ave;
	ave = ((double)a + b + c) / 3.0;
	if (ave >= 90) {
		cout << "A학점입니다";
	}
	else if (ave <= 90 && ave >= 80) {

	}

	return 0;
}*/ //5번
/*
int main() {
	int num;
	cout << "수강하는 학점을 입력하세요 : ";
	cin >> num;
	int money=0;
	cout << "지불해야할 수수료는(등록비 10달러 포함) : ";
	if (num > 12) {
		money = 12 * 10 + 10;
	}
	else {
		money = num * 10 + 10;
	}
	cout << money << "$ 입니다." << endl;


	return 0;
}6번 */
/*
int main() {
	int money;
	int amount;
	cout << "물건 개당 가격 입력 : ";
	cin >> money;
	cout << "구매 수량 입력 : ";
	cin >> amount;
	int sum = money * amount;
	if (amount <= 9 && amount >= 1) {
		cout << "할인율 0% 총 가격 : " << sum << endl;
	}
	else if (amount <= 49 && amount >= 10) {
		cout << "할인율 3% 총 가격 : " << sum-sum*0.03 << endl;
	}
	else if (amount <= 99 && amount >= 50) {
		cout << "할인율 5% 총 가격 : " << sum - sum * 0.05 << endl;
	}
	else if (amount >= 100) {
		cout << "할인율 10% 총 가격 : " << sum - sum * 0.1 << endl;
	}
	else {
		cout << "에러발생 다시 실행하세요\n";
	}
	return 0;
}7번 */
//210쪽
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
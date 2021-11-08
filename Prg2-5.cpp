#include<iostream>

using namespace std;

int main() {
	int balance = 0;
	int transaction;
	//
	std::cout << "첫 번째 거래 금액 입력: ";
	cin >> transaction;
	balance = balance + transaction;
	//
	std::cout << "두 번째 거래 금액 입력: ";
	std::cin >> transaction;
	balance += transaction;
	//
	cout << "세 번째 거래 금액 입력: ";
	cin >> transaction;
	balance += transaction;
	//
	cout << "계좌의 최종잔액은 " << balance << "달러입니다." << std::endl;
	return 0;
}
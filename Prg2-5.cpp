#include<iostream>

using namespace std;

int main() {
	int balance = 0;
	int transaction;
	//
	std::cout << "ù ��° �ŷ� �ݾ� �Է�: ";
	cin >> transaction;
	balance = balance + transaction;
	//
	std::cout << "�� ��° �ŷ� �ݾ� �Է�: ";
	std::cin >> transaction;
	balance += transaction;
	//
	cout << "�� ��° �ŷ� �ݾ� �Է�: ";
	cin >> transaction;
	balance += transaction;
	//
	cout << "������ �����ܾ��� " << balance << "�޷��Դϴ�." << std::endl;
	return 0;
}
#include<iostream>
#include<windows.h>
using namespace std;
int main() {/*
	for (int i = 1;;i++) {
		printf("����\n");
		printf("����ʹ�\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i%16);
		Sleep(200);
	}*/
	int number;
	cout << "������ �Է��ϼ���: ";
	cin >> number;
	if (number < 0) {
		number = -number;
	}
	cout << "input �� number�� ���밪 : " << number << endl;
	return 0;
}
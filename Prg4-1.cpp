#include<iostream>
#include<windows.h>
using namespace std;
int main() {/*
	for (int i = 1;;i++) {
		printf("집에\n");
		printf("가고싶다\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i%16);
		Sleep(200);
	}*/
	int number;
	cout << "정수를 입력하세요: ";
	cin >> number;
	if (number < 0) {
		number = -number;
	}
	cout << "input 한 number의 절대값 : " << number << endl;
	return 0;
}
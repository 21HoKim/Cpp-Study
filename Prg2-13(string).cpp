#include<iostream>
#include<string>
using namespace std;
int main() {
	string first;
	string initial;
	string last;
	string space = " ";
	string dot = ".";
	string fullName;
	cout << "이름 입력: ";
	cin >> first;
	cout << "이니셜 입력: ";
	cin >> initial;
	cout << "성 입력: ";
	cin >> last;
	fullName = first + space + initial + dot + space + last;
	cout << "전체이름 : " << fullName;
	return 0;
}
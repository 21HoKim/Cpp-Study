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
	cout << "�̸� �Է�: ";
	cin >> first;
	cout << "�̴ϼ� �Է�: ";
	cin >> initial;
	cout << "�� �Է�: ";
	cin >> last;
	fullName = first + space + initial + dot + space + last;
	cout << "��ü�̸� : " << fullName;
	return 0;
}
#include<iostream>
#include<cctype>
#include<stdio.h>
using namespace std;

int main() {
	char ch,c;
	int count = 0;
	while (cin >>noskipws>>ch) {//EOF ���� ��� �Է¹���, ������ noskipws : ������ �����ڷ� ������������,��ĭ�� �Է¹���
		if (isalpha(ch)) {
			count++;
		}
		cout<<(char)toupper(ch);
	}
	cout << "���ĺ� ������ ���� = " << count;
	return 0;
}
#include<iostream>
#include<cctype>
#include<stdio.h>
using namespace std;

int main() {
	char ch,c;
	int count = 0;
	while (cin >>noskipws>>ch) {//EOF 까지 계속 입력받음, 조정자 noskipws : 공백을 구분자로 설정하지않음,빈칸도 입력받음
		if (isalpha(ch)) {
			count++;
		}
		cout<<(char)toupper(ch);
	}
	cout << "알파벳 문자의 개수 = " << count;
	return 0;
}
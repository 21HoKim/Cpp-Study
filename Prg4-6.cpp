#include<iostream>
using namespace std;
int main() {
	int score;
	char grade;
	cout << "0~100�� ������ ���� �Է�: ";
	cin >> score;
	if (score>=90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else if (score >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
	cout << "���� ���� = ";
	cout << grade<<endl;
	return 0;
}
#include<iostream>
using namespace std;

int main() {
	const int CAP = 10;
	int score[CAP] = { 96,85,97,99,87,79,89,91,95,87 };
	int sum=0;
	double average;
	int i;
	bool A=false;
	int max = -1000,min=1000;
	for (i = 0; i < CAP; i++) {
		sum += score[i];
		if (max < score[i]) {
			max = score[i];
		}
		if (min > score[i]) {
			min = score[i];
		}
		if (score[i] == 90) {
			A = true;
		}
	}
	average = (double)sum / CAP;
	cout << "��� : " << average << endl;
	cout << "�� �� : " << sum << endl;
	cout << "�ִ� : " << max << endl;
	cout << "�ּ� : " << min << endl;
	if (A) {
		cout << "90���� �ֽ��ϴ�." << endl;
	}
	else {
		cout << "90���� �����ϴ�." << endl;
	}
	return 0;
}